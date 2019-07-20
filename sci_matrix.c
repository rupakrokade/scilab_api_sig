#include<Scierror.h>
#include<api_scilab.h>
#include "localization.h"

static const char fname[] = "matrix";

int matrix(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
    int i = 0;
    int row1 = 0;
    int col1 = 0;
    int size1 = 0;
    double* in1 = NULL;
    double* out1 = NULL;

    int row2 = 0;
    int col2 = 0;
    int size2 = 0;
    double* in2 = NULL;
    double* out2 = NULL;

if (nin > 2)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 2);
        return 1;
    }

		//Reading size of inputs received from scilab env and saving in row and col variables
    size1 = scilab_getDim2d(env, in[0], &row1, &col1);
    size2 = scilab_getDim2d(env, in[1], &row2, &col2);

    if (col1 != row2)//row1 != row2 || 
    {
        Scierror(999, _("%s: Wrong size for input arguments: Same size expected.\n"), fname);
        return 1;
    }

    
		//Reading inputs as arrays and saving in variables in1 and in2
    scilab_getDoubleArray(env, in[0], &in1);
    scilab_getDoubleArray(env, in[1], &in2);

		//Creating scilab matrix and saving in pointers out[0] and out[1]
    out[0] = scilab_createDoubleMatrix2d(env, row1, col1, 0);
    out[1] = scilab_createDoubleMatrix2d(env, row2, col2, 0);

		//saving the output in out1 and out2
    scilab_getDoubleArray(env, out[0], &out1);
    scilab_getDoubleArray(env, out[1], &out2);

    for (i = 0; i < size1; ++i)
    {

        out1[i] = in1[i];
    }

		for (i = 0; i < size2; ++i)
    {
				out2[i] = in2[i];
    }
    return 0;
}
