#ifdef __cplusplus
extern "C" void clargv_(
	const int &n,			// (input)
	complex<float> *x,		// x[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	complex<float> *y,		// y[1+(n-1)*incy] (input/output)
	const int &incy,		// (input)
	float *c,			// c[1+(n-1)*incc] (output)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void clargv_(
	const int *n,			/* (input) */
	complex_float *x,		/* x[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	complex_float *y,		/* y[1+(n-1)*incy] (input/output) */
	const int *incy,		/* (input) */
	float *c,			/* c[1+(n-1)*incc] (output) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

