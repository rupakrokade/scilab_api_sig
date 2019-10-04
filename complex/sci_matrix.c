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


if (nin != 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

		//Reading size of inputs received from scilab env and saving in row and col variables
    size1 = scilab_getDim2d(env, in[0], &row1, &col1);


    //Reading inputs as arrays and saving in variables in_real and in_img

		const double* in_real;
		const double* in_img;
		scilab_getDoubleComplexArray(env, in[0],&in_real, &in_img);


		//Creating scilab matrix and saving in pointers out[0]
    out[0] = scilab_createDoubleMatrix2d(env, row1, col1, 1);


		//saving the output in out1
		double* out_real;
		double* out_img;
		scilab_getDoubleComplexArray(env, out[0],&out_real, &out_img);


    for (i = 0; i < size1; ++i)
    {

        out_real[i] = in_real[i];
    }

		for (i = 0; i < size1; ++i)
    {
				out_img[i] = in_img[i];
    }
    return 0;
}
