#ifdef __cplusplus
extern "C" void clapll_(
	const int &n,			// (input)
	complex<float> *x,		// x[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	complex<float> *y,		// y[1+(n-1)*incy] (input/output)
	const int &incy,		// (input)
	float &ssmin			// (output)
	);
#else /* ! __cplusplus */
void clapll_(
	const int *n,			/* (input) */
	complex_float *x,		/* x[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	complex_float *y,		/* y[1+(n-1)*incy] (input/output) */
	const int *incy,		/* (input) */
	float *ssmin			/* (output) */
	);
#endif /* ! __cplusplus */

