#ifdef __cplusplus
extern "C" void clartv_(
	const int &n,			// (input)
	complex<float> *x,		// x[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	complex<float> *y,		// y[1+(n-1)*incy] (input/output)
	const int &incy,		// (input)
	const float *c,			// c[1+(n-1)*incc] (input)
	const complex<float> *s,	// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void clartv_(
	const int *n,			/* (input) */
	complex_float *x,		/* x[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	complex_float *y,		/* y[1+(n-1)*incy] (input/output) */
	const int *incy,		/* (input) */
	const float *c,			/* c[1+(n-1)*incc] (input) */
	const complex_float *s,		/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

