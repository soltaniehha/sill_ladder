#ifdef __cplusplus
extern "C" void zlargv_(
	const int &n,			// (input)
	complex<double> *x,		// x[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	complex<double> *y,		// y[1+(n-1)*incy] (input/output)
	const int &incy,		// (input)
	double *c,			// c[1+(n-1)*incc] (output)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void zlargv_(
	const int *n,			/* (input) */
	complex_double *x,		/* x[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	complex_double *y,		/* y[1+(n-1)*incy] (input/output) */
	const int *incy,		/* (input) */
	double *c,			/* c[1+(n-1)*incc] (output) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

