try exec cleaner.sce
end

ulink
ilib_build('build_matrix',['matrix','matrix','csci6'],"sci_matrix.c",[]);
exec loader.sce

[c, d] = matrix([2,2;2,2], [3,8;4,5])
