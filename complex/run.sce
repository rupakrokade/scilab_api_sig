try exec cleaner.sce
end

ulink
ilib_build('build_matrix',['matrix','matrix','csci6'],"sci_matrix.c",[]);
exec loader.sce

matrix([2+%i, -3+4*%i])
