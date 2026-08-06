package("slint")
    set_homepage("https://slint.dev")
    set_description("Declarative GUI toolkit for C++")
    set_license("GPL-3.0-only OR LicenseRef-Slint-Royalty-free-2.0 OR LicenseRef-Slint-Software-3.0")

    add_urls("https://github.com/slint-ui/slint/archive/refs/tags/v$(version).tar.gz",
             "https://github.com/slint-ui/slint.git")
    add_versions("1.17.1", "68222567f8c70ff677cd4a98cd94fb4765ac0f797eb8f8608a646911c908dc2a")

    add_configs("shared", {description = "Build the Slint runtime as a shared library", default = true, type = "boolean", readonly = true})
    add_configs("win7_compat", {description = "Build the Slint runtime for Windows 7", default = false, type = "boolean"})

    add_deps("cmake")
    add_deps("rust 1.92.0", {host = true, private = true, system = false})
    add_deps("rustup 1.28.1", {host = true, private = true, system = false})

    on_load(function(package)
        package:add("includedirs", "include/slint")
        if package:is_plat("windows") then
            package:add("links", "slint_cpp.dll")
        else
            package:add("links", "slint_cpp")
        end
    end)

    on_install("windows", "linux", "macosx", function(package)
        local cmake = import("package.tools.cmake")
        if package:is_plat("windows") then
            -- MSVC 14.36 miscompiles Slint's nested requires/if-constexpr
            -- callback probe. Use equivalent SFINAE without disabling ListView.
            local models_header = "api/cpp/include/private/slint_models.h"
            local models_source = io.readfile(models_header)
            local original_includes = [[#include <optional>
#include <vector>]]
            local patched_includes = [[#include <optional>
#include <utility>
#include <vector>]]
            assert(models_source:find(original_includes, 1, true),
                "Unable to locate Slint model includes for the MSVC compatibility patch")

            local make_ops_marker =
                "    /// Build the ops vtable. The returned struct borrows from `ctx`,"
            local callback_helpers = [[    using ListViewLayoutCallback = float (*)(void *, uintptr_t, float *);

    template<typename Ctx, typename T = C>
    static auto make_listview_layout_callback(int)
            -> decltype(std::declval<T &>().listview_layout(std::declval<float *>()),
                        ListViewLayoutCallback {})
    {
        return [](void *ud, uintptr_t instance_idx, float *y) -> float {
            return (**static_cast<Ctx *>(ud)->inner->data[instance_idx].ptr).listview_layout(y);
        };
    }

    template<typename Ctx>
    static ListViewLayoutCallback make_listview_layout_callback(...) { return nullptr; }

]]
            assert(models_source:find(make_ops_marker, 1, true),
                "Unable to locate Slint's repeater vtable for the MSVC compatibility patch")

            local original_callback = [[            .listview_layout =
                    [] {
                        if constexpr (requires(C c, float *y) { c.listview_layout(y); }) {
                            return [](void *ud, uintptr_t instance_idx, float *y) -> float {
                                return (**static_cast<Ctx *>(ud)->inner->data[instance_idx].ptr)
                                        .listview_layout(y);
                            };
                        } else {
                            return nullptr;
                        }
                    }(),]]
            local patched_callback =
                "            .listview_layout = make_listview_layout_callback<Ctx>(0),"
            assert(models_source:find(original_callback, 1, true),
                "Unable to locate Slint's ListView callback for the MSVC compatibility patch")
            io.replace(models_header, original_includes, patched_includes, {plain = true})
            io.replace(
                models_header,
                make_ops_marker,
                callback_helpers .. make_ops_marker,
                {plain = true})
            io.replace(models_header, original_callback, patched_callback, {plain = true})
        end
        if package:is_plat("windows") and package:config("win7_compat") then
            local winit_backend = "internal/backends/winit/lib.rs"
            local original_dpi_query = [[            use windows::Win32::UI::HiDpi::SystemParametersInfoForDpi;
            use windows::Win32::UI::WindowsAndMessaging::{
                NONCLIENTMETRICSW, SPI_GETNONCLIENTMETRICS,
            };
            let mut metrics = NONCLIENTMETRICSW {
                cbSize: core::mem::size_of::<NONCLIENTMETRICSW>() as u32,
                ..NONCLIENTMETRICSW::default()
            };
            let ok = unsafe {
                SystemParametersInfoForDpi(
                    SPI_GETNONCLIENTMETRICS.0,
                    metrics.cbSize,
                    Some(&mut metrics as *mut _ as *mut core::ffi::c_void),
                    0,
                    96,
                )
            }
            .is_ok();]]
            local win7_dpi_query = [[            use windows::Win32::UI::WindowsAndMessaging::{
                NONCLIENTMETRICSW, SPI_GETNONCLIENTMETRICS,
            };
            let mut metrics = NONCLIENTMETRICSW {
                cbSize: core::mem::size_of::<NONCLIENTMETRICSW>() as u32,
                ..NONCLIENTMETRICSW::default()
            };
            let ok = unsafe {
                type SystemParametersInfoForDpiFn = unsafe extern "system" fn(
                    u32,
                    u32,
                    *mut core::ffi::c_void,
                    u32,
                    u32,
                ) -> i32;

                #[link(name = "kernel32")]
                unsafe extern "system" {
                    fn GetModuleHandleW(module_name: *const u16) -> *mut core::ffi::c_void;
                    fn GetProcAddress(
                        module: *mut core::ffi::c_void,
                        proc_name: *const u8,
                    ) -> *mut core::ffi::c_void;
                }
                #[link(name = "user32")]
                unsafe extern "system" {
                    fn SystemParametersInfoW(
                        action: u32,
                        param: u32,
                        data: *mut core::ffi::c_void,
                        update: u32,
                    ) -> i32;
                }

                let user32_name = [
                    b'u' as u16,
                    b's' as u16,
                    b'e' as u16,
                    b'r' as u16,
                    b'3' as u16,
                    b'2' as u16,
                    b'.' as u16,
                    b'd' as u16,
                    b'l' as u16,
                    b'l' as u16,
                    0,
                ];
                let user32 = GetModuleHandleW(user32_name.as_ptr());
                let query_for_dpi = if user32.is_null() {
                    core::ptr::null_mut()
                } else {
                    GetProcAddress(user32, b"SystemParametersInfoForDpi\0".as_ptr())
                };
                let data = &mut metrics as *mut _ as *mut core::ffi::c_void;
                if query_for_dpi.is_null() {
                    SystemParametersInfoW(
                        SPI_GETNONCLIENTMETRICS.0,
                        metrics.cbSize,
                        data,
                        0,
                    ) != 0
                } else {
                    let query_for_dpi: SystemParametersInfoForDpiFn =
                        core::mem::transmute(query_for_dpi);
                    query_for_dpi(
                        SPI_GETNONCLIENTMETRICS.0,
                        metrics.cbSize,
                        data,
                        0,
                        96,
                    ) != 0
                }
            };]]
            local winit_source = io.readfile(winit_backend)
            assert(winit_source:find(original_dpi_query, 1, true),
                "Unable to locate Slint's DPI query for the Windows 7 compatibility patch")
            io.replace(winit_backend, original_dpi_query, win7_dpi_query, {plain = true})

            io.replace("api/cpp/CMakeLists.txt",
                "list(PREPEND CMAKE_MODULE_PATH ${Corrosion_SOURCE_DIR}/cmake)",
                [[
list(PREPEND CMAKE_MODULE_PATH ${Corrosion_SOURCE_DIR}/cmake)
if(Rust_CARGO_TARGET MATCHES "-win7-windows-")
    set(_slint_find_rust_file "${Corrosion_SOURCE_DIR}/cmake/FindRust.cmake")
    file(READ "${_slint_find_rust_file}" _slint_find_rust)
    string(FIND "${_slint_find_rust}" "\"win7\"" _slint_win7_vendor)
    if(_slint_win7_vendor EQUAL -1)
        string(REPLACE "        \"pc\"\n"
            "        \"pc\"\n        \"win7\"\n"
            _slint_find_rust "${_slint_find_rust}")
        file(WRITE "${_slint_find_rust_file}" "${_slint_find_rust}")
    endif()
endif()
]],
                {plain = true})
        end
        local configs = {
            "-DSLINT_BUILD_TESTING=OFF",
            "-DSLINT_BUILD_EXAMPLES=OFF",
            "-DSLINT_FEATURE_INTERPRETER=OFF",
            "-DSLINT_FEATURE_LIVE_PREVIEW=OFF",
            "-DSLINT_FEATURE_TESTING=OFF",
            "-DSLINT_FEATURE_SYSTEM_TESTING=OFF",
            "-DSLINT_FEATURE_MCP=OFF",
            "-DSLINT_FEATURE_BACKEND_QT=OFF",
            "-DSLINT_FEATURE_RENDERER_SKIA=OFF",
            "-DSLINT_FEATURE_RENDERER_SKIA_OPENGL=OFF",
            "-DSLINT_FEATURE_RENDERER_SKIA_VULKAN=OFF",
            "-DSLINT_FEATURE_RENDERER_FEMTOVG=ON",
            "-DSLINT_FEATURE_RENDERER_SOFTWARE=ON",
            "-DSLINT_STYLE=fluent",
            "-DBUILD_SHARED_LIBS=ON"
        }
        local envs
        if package:is_plat("windows") then
            table.insert(configs, "-DCMAKE_RC_COMPILER=rc")
            if package:config("win7_compat") then
                assert(package:is_arch("x64"), "The Slint Windows 7 build currently supports x64 only")

                local rustup_root = package:dep("rustup"):installdir()
                local rustup_home = path.join(rustup_root, ".rustup")
                local rustup_cargo_home = path.join(rustup_root, ".cargo")
                local cargo_home = path.absolute(
                    path.join(package:builddir(), "cargo-home"))
                local rustup = path.join(rustup_cargo_home, "bin", "rustup.exe")
                local toolchain = "1.92.0-x86_64-pc-windows-msvc"
                envs = cmake.buildenvs(package)
                envs.RUSTUP_HOME = rustup_home
                envs.CARGO_HOME = cargo_home
                os.vrunv(rustup, {
                    "toolchain", "install", toolchain,
                    "--profile", "minimal",
                    "--component", "rust-src",
                    "--no-self-update"
                }, {envs = envs})

                local toolchain_bin = path.join(rustup_home, "toolchains", toolchain, "bin")
                local rustc = path.join(toolchain_bin, "rustc.exe")
                local cargo = path.join(toolchain_bin, "cargo.exe")
                assert(os.isfile(rustc), "Windows 7 Rust compiler was not installed: " .. rustc)
                assert(os.isfile(cargo), "Windows 7 Cargo was not installed: " .. cargo)

                envs.RUSTC = rustc
                envs.RUSTC_BOOTSTRAP = "1"
                envs.CARGO_ENCODED_RUSTFLAGS =
                    "-Ctarget-feature=+crt-static\31--cfg=windows_slim_errors"

                local fetch_dir = path.join(package:builddir(), "win7-windows-core-fetch")
                local fetch_manifest = path.join(fetch_dir, "Cargo.toml")
                os.mkdir(path.join(fetch_dir, "src"))
                io.writefile(fetch_manifest, [[
[package]
name = "crossdesk-win7-windows-core-fetch"
version = "0.0.0"
edition = "2021"
publish = false

[dependencies]
windows-core = "=0.62.2"

[workspace]
]])
                io.writefile(path.join(fetch_dir, "src", "lib.rs"), "")
                os.vrunv(cargo, {
                    "fetch",
                    "--manifest-path", fetch_manifest,
                    "--target", "x86_64-win7-windows-msvc"
                }, {envs = envs})
                local marshaler_import =
                    [[windows_link::link!("combase.dll" "system" fn CoCreateFreeThreadedMarshaler(punkouter: *mut c_void, ppunkmarshal: *mut *mut c_void) -> HRESULT);]]
                local win7_marshaler_import =
                    [[windows_link::link!("ole32.dll" "system" fn CoCreateFreeThreadedMarshaler(punkouter: *mut c_void, ppunkmarshal: *mut *mut c_void) -> HRESULT);]]
                local marshaler_files = os.files(path.join(
                    cargo_home,
                    "registry", "src", "*", "windows-core-0.62.2",
                    "src", "imp", "marshaler.rs"))
                assert(#marshaler_files > 0,
                    "Unable to locate windows-core 0.62.2 for the Windows 7 compatibility patch")
                for _, marshaler_file in ipairs(marshaler_files) do
                    local marshaler_source = io.readfile(marshaler_file)
                    if not marshaler_source:find(win7_marshaler_import, 1, true) then
                        assert(marshaler_source:find(marshaler_import, 1, true),
                            "Unable to locate the windows-core marshaler import for the Windows 7 compatibility patch")
                        io.replace(
                            marshaler_file,
                            marshaler_import,
                            win7_marshaler_import,
                            {plain = true})
                    end
                end

                table.insert(configs, "-DCMAKE_C_COMPILER=" .. path.unix(package:build_getenv("cc")))
                table.insert(configs, "-DCMAKE_CXX_COMPILER=" .. path.unix(package:build_getenv("cxx")))
                table.insert(configs, "-DRust_COMPILER=" .. path.unix(rustc))
                table.insert(configs, "-DRust_CARGO=" .. path.unix(cargo))
                table.insert(configs, "-DRust_CARGO_TARGET=x86_64-win7-windows-msvc")
                table.insert(configs, "-DSLINT_LIBRARY_CARGO_FLAGS=-Zbuild-std=std,panic_abort")
                table.insert(configs, "-DSLINT_FEATURE_ACCESSIBILITY=OFF")
            end
        end
        cmake.install(package, configs, {envs = envs})
    end)

    on_test(function(package)
        assert(package:has_cxxincludes("slint.h", {configs = {languages = "c++20"}}), "Slint C++ headers are unusable")
        assert(os.isfile(path.join(package:installdir(), "bin", is_host("windows") and "slint-compiler.exe" or "slint-compiler")), "slint-compiler was not installed")
    end)
package_end()
