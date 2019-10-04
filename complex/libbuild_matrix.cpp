#include <wchar.h>
#include "libbuild_matrix.hxx"
extern "C"
{
#include "libbuild_matrix.h"
#include "addfunction.h"
}

#define MODULE_NAME L"libbuild_matrix"

int libbuild_matrix(wchar_t* _pwstFuncName)
{
    if(wcscmp(_pwstFuncName, L"matrix") == 0){ addCFunction(L"matrix", &matrix, MODULE_NAME); }

    return 1;
}
