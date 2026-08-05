<#
.SYNOPSIS
    CrossDesk Windows x64 一键编译打包脚本

.DESCRIPTION
    该脚本完成以下工作：
      1. 检查构建工具 (xmake / NSIS) 是否可用
      2. 使用 xmake 编译 release 版本的 crossdesk 及相关二进制
      3. 调用 NSIS 生成 Windows 安装包

.PARAMETER Version
    安装包版本号，默认 1.0.0。将作为最终 exe 文件名的一部分：
    crossdesk-win-x64-<version>.exe

.PARAMETER iswin7
    设为 1 时编译 Windows 7 兼容版，并生成带 _win7 后缀的安装包。
    设为 0 或不指定时编译面向较高版本 Windows 的标准版。

.PARAMETER Clean
    编译前清理 build 目录 (xmake clean -a)。

.PARAMETER Reconfig
    强制执行配置步骤。正常编译时也会自动配置，以确保 iswin7 模式正确。

.PARAMETER Proxy
    包下载代理地址，例如 socks5h://127.0.0.1:10808。
    默认沿用现有 .xmake 配置 (不传 --proxy 参数)。

.PARAMETER SkipBuild
    跳过 xmake 编译步骤，仅执行 NSIS 打包 (需要 build 目录已存在产物)。

.PARAMETER SkipPackage
    跳过 NSIS 打包步骤，仅执行编译。

.EXAMPLE
    # 默认编译并打包 1.0.0 版本
    .\build.ps1

.EXAMPLE
    # 指定版本号
    .\build.ps1 -Version 2.0.0

.EXAMPLE
    # 编译 Windows 7 兼容版
    .\build.ps1 -Version 2.0.0 -iswin7 1

.EXAMPLE
    # 修改了 xmake.lua 后，重新配置并编译
    .\build.ps1 -Reconfig

.EXAMPLE
    # 全新构建
    .\build.ps1 -Clean -Reconfig

.EXAMPLE
    # 仅打包 (复用已有的 build 产物)
    .\build.ps1 -SkipBuild
#>

[CmdletBinding()]
param(
    [string]$Version = "1.0.0",
    [ValidateSet(0, 1)]
    [int]$iswin7 = 0,
    [switch]$Clean,
    [switch]$Reconfig,
    [string]$Proxy = "",
    [switch]$SkipBuild,
    [switch]$SkipPackage
)

$ErrorActionPreference = "Stop"

#----------------------------------------------------------------------
# 工具路径探测
#----------------------------------------------------------------------
function Find-Tool {
    param(
        [string]$Name,
        [string[]]$CandidatePaths = @()
    )

    # 优先使用 PATH 中的工具
    $cmd = Get-Command $Name -ErrorAction SilentlyContinue
    if ($cmd) {
        return $cmd.Source
    }

    # 在候选路径中查找
    foreach ($p in $CandidatePaths) {
        if (Test-Path $p) {
            return $p
        }
    }
    return $null
}

function Find-Dumpbin {
    $dumpbin = Find-Tool "dumpbin.exe"
    if ($dumpbin) {
        return $dumpbin
    }

    $vswhereCandidates = @(
        "${env:ProgramFiles(x86)}\Microsoft Visual Studio\Installer\vswhere.exe",
        "$env:ProgramFiles\Microsoft Visual Studio\Installer\vswhere.exe"
    )
    foreach ($vswhere in $vswhereCandidates) {
        if (-not (Test-Path $vswhere)) {
            continue
        }
        $matches = @(& $vswhere -latest -products "*" `
            -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 `
            -find "VC\Tools\MSVC\**\bin\Hostx64\x64\dumpbin.exe")
        if ($LASTEXITCODE -eq 0 -and $matches.Count -gt 0) {
            return $matches[0]
        }
    }
    return $null
}

function Assert-Win7Binary {
    param(
        [string]$BinaryPath,
        [string]$DumpbinPath
    )

    $imports = (& $DumpbinPath /nologo /imports $BinaryPath 2>&1 | Out-String)
    if ($LASTEXITCODE -ne 0) {
        throw "dumpbin 无法读取 PE 导入表: $BinaryPath"
    }

    $forbiddenImports = @(
        "SystemParametersInfoForDpi",
        "GetSystemTimePreciseAsFileTime",
        "WaitOnAddress",
        "WakeByAddressAll",
        "WakeByAddressSingle",
        "RoOriginateErrorW",
        "ProcessPrng",
        "combase.dll",
        "api-ms-win-core-winrt-error-l1-1-0.dll",
        "api-ms-win-core-synch-l1-2-0.dll",
        "bcryptprimitives.dll",
        "shcore.dll",
        "dcomp.dll",
        "windowsapp.dll",
        "CoreMessaging.dll",
        "CoreUIComponents.dll",
        "VCRUNTIME140.dll",
        "api-ms-win-crt-"
    )
    $matches = @()
    foreach ($item in $forbiddenImports) {
        if ($imports.IndexOf($item, [StringComparison]::OrdinalIgnoreCase) -ge 0) {
            $matches += $item
        }
    }
    if ($matches.Count -gt 0) {
        $fileName = Split-Path -Leaf $BinaryPath
        throw "$fileName 仍包含 Win7 不兼容导入: $($matches -join ', ')"
    }
}

function Write-Step {
    param([string]$Message)
    Write-Host ""
    Write-Host "========================================" -ForegroundColor Cyan
    Write-Host "  $Message" -ForegroundColor Cyan
    Write-Host "========================================" -ForegroundColor Cyan
}

function Write-OK {
    param([string]$Message)
    Write-Host "[OK] $Message" -ForegroundColor Green
}

function Write-Fail {
    param([string]$Message)
    Write-Host "[FAIL] $Message" -ForegroundColor Red
}

#----------------------------------------------------------------------
# 路径常量
#----------------------------------------------------------------------
$ScriptDir   = Split-Path -Parent $MyInvocation.MyCommand.Path
$ProjectRoot = Split-Path -Parent (Split-Path -Parent $ScriptDir)
$BuildDir    = Join-Path $ProjectRoot "build"
$ReleaseDir  = Join-Path $BuildDir "windows\x64\release"
$NsisScript  = Join-Path $ScriptDir "nsis_script.nsi"
$BuildModeFile = Join-Path $ReleaseDir ".crossdesk-build-mode"
$BuildMode = if ($iswin7 -eq 1) { "win7" } else { "standard" }
$XmakeWin7 = if ($iswin7 -eq 1) { "y" } else { "n" }
$InstallerSuffix = if ($iswin7 -eq 1) { "_win7" } else { "" }

if ($Proxy) {
    $env:HTTP_PROXY = $Proxy
    $env:HTTPS_PROXY = $Proxy
    $env:ALL_PROXY = $Proxy
}

#----------------------------------------------------------------------
# 1. 检查工具链
#----------------------------------------------------------------------
Write-Step "检查构建工具"

$xmakePath = Find-Tool "xmake.exe" @(
    "C:\Program Files\xmake\xmake.exe"
)
if (-not $xmakePath) {
    Write-Fail "未找到 xmake，请安装: winget install xmake-io.xmake"
    exit 1
}
Write-OK "xmake: $xmakePath"

if ($Proxy) {
    $xmakeProxy = $Proxy `
        -replace '^socks5h://', 'socks5://' `
        -replace '^socks://', 'socks5://'
    & $xmakePath g "--proxy=$xmakeProxy"
    if ($LASTEXITCODE -ne 0) {
        Write-Fail "xmake 代理配置失败"
        exit $LASTEXITCODE
    }
    Write-OK "xmake proxy: $xmakeProxy"
}

$makensisPath = Find-Tool "makensis.exe" @(
    "C:\Program Files (x86)\NSIS\makensis.exe",
    "C:\Program Files\NSIS\makensis.exe"
)
if (-not $makensisPath) {
    Write-Fail "未找到 makensis (NSIS)，请安装: winget install NSIS.NSIS"
    exit 1
}
Write-OK "makensis: $makensisPath"

#----------------------------------------------------------------------
# 2. 停止运行中的 CrossDesk (释放文件锁)
#----------------------------------------------------------------------
Write-Step "停止运行中的 CrossDesk"

$crossdeskProcesses = @("crossdesk", "crossdesk_service", "crossdesk_session_helper")
$processFound = $false
foreach ($procName in $crossdeskProcesses) {
    $procs = Get-Process -Name $procName -ErrorAction SilentlyContinue
    if ($procs) {
        $processFound = $true
        foreach ($p in $procs) {
            Write-Host "  正在停止 $procName (PID: $($p.Id))..."
            Stop-Process -Id $p.Id -Force -ErrorAction SilentlyContinue
        }
    }
}

if ($processFound) {
    Start-Sleep -Seconds 2
    # 验证进程是否已停止
    $stillRunning = $false
    foreach ($procName in $crossdeskProcesses) {
        if (Get-Process -Name $procName -ErrorAction SilentlyContinue) {
            $stillRunning = $true
        }
    }
    if ($stillRunning) {
        Write-Host "  部分进程以服务权限运行，尝试通过 sc.exe 停止..." -ForegroundColor Yellow
        $ErrorActionPreference = "Continue"
        & sc.exe stop CrossDeskService 2>&1 | Out-Null
        Start-Sleep -Seconds 2
        foreach ($procName in $crossdeskProcesses) {
            & taskkill.exe /F /IM "$procName.exe" 2>&1 | Out-Null
        }
        Start-Sleep -Seconds 1
        $ErrorActionPreference = "Stop"

        # 再次检查
        $stillRunning = $false
        foreach ($procName in $crossdeskProcesses) {
            if (Get-Process -Name $procName -ErrorAction SilentlyContinue) {
                $stillRunning = $true
            }
        }
        if ($stillRunning) {
            Write-Host "  警告: 部分进程无法停止 (需要管理员权限)，将尝试重命名锁定文件..." -ForegroundColor Yellow
        }
    }

    # 重命名仍被锁定的输出文件 (DLL/EXE 可能被运行中的进程锁定)
    $lockedExtensions = @("*.exe", "*.dll")
    foreach ($pattern in $lockedExtensions) {
        $files = Get-ChildItem -Path $ReleaseDir -Filter $pattern -ErrorAction SilentlyContinue
        foreach ($f in $files) {
            $oldName = $f.Name + ".old"
            $oldPath = Join-Path $ReleaseDir $oldName
            # 清理旧的 .old 文件
            if (Test-Path $oldPath) {
                Remove-Item $oldPath -Force -ErrorAction SilentlyContinue
            }
            # 尝试重命名 (绕过文件锁)
            Rename-Item $f.FullName $oldName -Force -ErrorAction SilentlyContinue
        }
    }
    Write-OK "CrossDesk 进程处理完成"
} else {
    Write-OK "没有运行中的 CrossDesk 进程"
}

#----------------------------------------------------------------------
# 3. 清理 build 目录 (可选)
#----------------------------------------------------------------------
if ($Clean) {
    Write-Step "清理 build 目录"
    Push-Location $ProjectRoot
    try {
        & $xmakePath clean -a
        if ($LASTEXITCODE -ne 0) {
            Write-Fail "xmake clean 失败"
            exit $LASTEXITCODE
        }
    } finally {
        Pop-Location
    }
    Write-OK "清理完成"
}

#----------------------------------------------------------------------
# 4. xmake 配置
#----------------------------------------------------------------------
if (-not $SkipBuild -or $Reconfig) {
    Write-Step "配置 xmake (模式: $BuildMode)"
    Push-Location $ProjectRoot
    try {
        $configArgs = @(
            "f", "-y",
            "-p", "windows",
            "-m", "release",
            "-a", "x64",
            "--iswin7=$XmakeWin7",
            "--CROSSDESK_VERSION=$Version"
        )
        & $xmakePath @configArgs
        if ($LASTEXITCODE -ne 0) {
            Write-Fail "xmake 配置失败"
            exit $LASTEXITCODE
        }
    } finally {
        Pop-Location
    }
    Write-OK "xmake 配置完成: $BuildMode"
}

#----------------------------------------------------------------------
# 5. xmake 编译
#----------------------------------------------------------------------
if (-not $SkipBuild) {
    Write-Step "编译 crossdesk (release/x64, 模式: $BuildMode)"
    if ($iswin7 -eq 1) {
        Get-ChildItem -Path $ReleaseDir -Filter "wgc_plugin.*" `
            -ErrorAction SilentlyContinue |
            Remove-Item -Force -ErrorAction Stop
    }
    Push-Location $ProjectRoot
    try {
        & $xmakePath build crossdesk
        if ($LASTEXITCODE -ne 0) {
            Write-Fail "xmake build 失败"
            exit $LASTEXITCODE
        }
    } finally {
        Pop-Location
    }
    Set-Content -Path $BuildModeFile -Value $BuildMode -Encoding ASCII
    Write-OK "编译完成"
} else {
    Write-Step "跳过编译步骤"
    if (-not (Test-Path $BuildModeFile)) {
        Write-Fail "缺少构建模式标记，不能确认现有产物是否匹配 iswin7=$iswin7"
        exit 1
    }
    $existingMode = (Get-Content -Raw $BuildModeFile).Trim()
    if ($existingMode -ne $BuildMode) {
        Write-Fail "现有产物模式为 $existingMode，但请求打包模式为 $BuildMode"
        exit 1
    }
}

#----------------------------------------------------------------------
# 6. 验证编译产物
#----------------------------------------------------------------------
Write-Step "验证编译产物"

$expectedFiles = @(
    "crossdesk.exe",
    "crossdesk_service.exe",
    "crossdesk_session_helper.exe",
    "slint_cpp.dll"
)
if ($iswin7 -eq 0) {
    $expectedFiles += "wgc_plugin.dll"
}

$missingFiles = @()
foreach ($f in $expectedFiles) {
    $fullPath = Join-Path $ReleaseDir $f
    if (Test-Path $fullPath) {
        $size = (Get-Item $fullPath).Length
        $sizeStr = "{0:N0}" -f $size
        Write-OK ("{0,-35} {1} 字节" -f $f, $sizeStr)
    } else {
        Write-Fail "缺少: $f"
        $missingFiles += $f
    }
}

# 列出生成的 DLL
$dllFiles = Get-ChildItem -Path $ReleaseDir -Filter "*.dll" -ErrorAction SilentlyContinue
foreach ($dll in $dllFiles) {
    $sizeStr = "{0:N0}" -f $dll.Length
    Write-OK ("{0,-35} {1} 字节" -f $dll.Name, $sizeStr)
}

if ($missingFiles.Count -gt 0) {
    Write-Fail "存在缺失的编译产物，请先编译"
    exit 1
}

#----------------------------------------------------------------------
# 7. Win7 运行库导入审计
#----------------------------------------------------------------------
if ($iswin7 -eq 1) {
    Write-Step "审计 Win7 PE 导入表"
    $dumpbinPath = Find-Dumpbin
    if (-not $dumpbinPath) {
        Write-Fail "未找到 dumpbin.exe，无法验证 Win7 二进制"
        exit 1
    }

    $peFiles = Get-ChildItem -Path $ReleaseDir -File |
        Where-Object { $_.Extension -in @(".exe", ".dll") }
    foreach ($peFile in $peFiles) {
        try {
            Assert-Win7Binary `
                -BinaryPath $peFile.FullName `
                -DumpbinPath $dumpbinPath
        } catch {
            Write-Fail $_.Exception.Message
            exit 1
        }
        Write-OK "$($peFile.Name) 未发现已知 Win7 不兼容导入"
    }

    if (Test-Path (Join-Path $ReleaseDir "wgc_plugin.dll")) {
        Write-Fail "Win7 产物中不应包含 wgc_plugin.dll"
        exit 1
    }
}

#----------------------------------------------------------------------
# 8. NSIS 打包
#----------------------------------------------------------------------
if (-not $SkipPackage) {
    Write-Step "NSIS 生成安装包 (版本: $Version, 模式: $BuildMode)"

    Push-Location $ScriptDir
    try {
        & $makensisPath "/DVERSION=$Version" "/DISWIN7=$iswin7" "nsis_script.nsi"
        if ($LASTEXITCODE -ne 0) {
            Write-Fail "NSIS 打包失败"
            exit $LASTEXITCODE
        }
    } finally {
        Pop-Location
    }

    $installerPath = Join-Path $ScriptDir "crossdesk-win-x64-${Version}${InstallerSuffix}.exe"
    if (Test-Path $installerPath) {
        $size = (Get-Item $installerPath).Length
        $sizeStr = "{0:N0}" -f $size
        $sizeMB = "{0:N2}" -f ($size / 1MB)
        Write-OK "安装包生成成功"
        Write-Host ""
        Write-Host ("  路径: {0}" -f $installerPath) -ForegroundColor Yellow
        Write-Host ("  大小: {0} 字节 ({1} MB)" -f $sizeStr, $sizeMB) -ForegroundColor Yellow
    } else {
        Write-Fail "未找到生成的安装包: $installerPath"
        exit 1
    }
} else {
    Write-Step "跳过打包步骤"
}

#----------------------------------------------------------------------
# 完成
#----------------------------------------------------------------------
Write-Step "全部完成"
Write-Host ""
