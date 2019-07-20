#ifndef __LIBBUILD_MATRIX_GW_HXX__
#define __LIBBUILD_MATRIX_GW_HXX__

#ifdef _MSC_VER
#ifdef LIBBUILD_MATRIX_GW_EXPORTS
#define LIBBUILD_MATRIX_GW_IMPEXP __declspec(dllexport)
#else
#define LIBBUILD_MATRIX_GW_IMPEXP __declspec(dllimport)
#endif
#else
#define LIBBUILD_MATRIX_GW_IMPEXP
#endif

extern "C" LIBBUILD_MATRIX_GW_IMPEXP int libbuild_matrix(wchar_t* _pwstFuncName);



#endif /* __LIBBUILD_MATRIX_GW_HXX__ */
