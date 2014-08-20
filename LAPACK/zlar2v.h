#ifdef __cplusplus
extern "C" void zlar2v_(
	const int &n,			// (input)
	complex<double> *x,		// x[1+(n-1)*incx] (input/output)
	complex<double> *y,		// y[1+(n-1)*incx] (input/output)
	complex<double> *z,		// z[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	const double *c,		// c[1+(n-1)*incc] (input)
	const complex<double> *s,	// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void zlar2v_(
	const int *n,			/* (input) */
	complex_double *x,		/* x[1+(n-1)*incx] (input/output) */
	complex_double *y,		/* y[1+(n-1)*incx] (input/output) */
	complex_double *z,		/* z[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	const double *c,		/* c[1+(n-1)*incc] (input) */
	const complex_double *s,	/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

