rule("slint")
    set_extensions(".slint")

    on_config(function(target)
        local rule_name = "slint"
        if target:rule("c++.build") then
            local cpp_rule = target:rule("c++.build"):clone()
            cpp_rule:add("deps", rule_name, {order = true})
            target:rule_add(cpp_rule)
        end

        local outputdir = path.join(target:autogendir(), "rules", "slint")
        os.mkdir(outputdir)
        target:add("includedirs", outputdir, {public = true})
        -- The Slint compiler generates #include paths relative to the project
        -- root, so we must add the project root to the include search paths.
        target:add("includedirs", os.projectdir())

        local sourcebatch = target:sourcebatches()[rule_name]
        if sourcebatch and sourcebatch.sourcefiles then
            for _, sourcefile in ipairs(sourcebatch.sourcefiles) do
                local basename = path.basename(sourcefile)
                -- Make the generated include discoverable during C++ dependency
                -- scanning; the real contents are produced before compilation.
                os.touch(path.join(outputdir, basename .. ".h"))
                os.touch(path.join(outputdir, basename .. ".cpp"))
                -- Register the generated implementation so Slint's runtime
                -- types and methods are available to the linker.
                target:add("files", path.join(outputdir, basename .. ".cpp"))
            end
        end
    end)

    before_buildcmd_file(function(target, batchcmds, sourcefile, opt)
        local package = assert(target:pkg("slint"), "the slint package is required by this target")
        local compiler = path.join(package:installdir(), "bin", is_host("windows") and "slint-compiler.exe" or "slint-compiler")
        local outputdir = path.join(target:autogendir(), "rules", "slint")
        local outputfile = path.join(outputdir, path.basename(sourcefile) .. ".h")
        local cppfile = path.join(outputdir, path.basename(sourcefile) .. ".cpp")
        local depfile = outputfile .. ".d"

        batchcmds:show_progress(opt.progress, "${color.build.object}generating.slint %s", sourcefile)
        batchcmds:mkdir(outputdir)
        batchcmds:vrunv(compiler, {
            sourcefile,
            "-f", "cpp",
            "-o", outputfile,
            "--cpp-file", cppfile,
            "--depfile", depfile,
            "--style", "fluent",
            "--embed-resources=embed-files",
            "--cpp-namespace", "crossdesk::ui"
        })
        -- The compiler's depfile is useful to external build systems, while
        -- xmake needs imported .slint files registered explicitly so editing a
        -- component regenerates the umbrella header without a forced rebuild.
        for _, dependency in ipairs(os.files(path.join(path.directory(sourcefile), "*.slint"))) do
            batchcmds:add_depfiles(dependency)
        end
        batchcmds:set_depmtime(os.mtime(outputfile))
        batchcmds:set_depcache(target:dependfile(outputfile))
    end)
rule_end()
