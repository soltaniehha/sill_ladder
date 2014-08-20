#ifdef __cplusplus
extern "C" void zlartv_(
	const int &n,			// (input)
	complex<double> *x,		// x[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	complex<double> *y,		// y[1+(n-1)*incy] (input/output)
	const int &incy,		// (input)
	const double *c,		// c[1+(n-1)*incc] (input)
	const complex<double> *s,	// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void zlartv_(
	const int *n,			/* (input) */
	complex_double *x,		/* x[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	complex_double *y,		/* y[1+(n-1)*incy] (input/output) */
	const int *incy,		/* (input) */
	const double *c,		/* c[1+(n-1)*incc] (input) */
	const complex_double *s,	/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

