#ifdef __cplusplus
extern "C" void clar2v_(
	const int &n,			// (input)
	complex<float> *x,		// x[1+(n-1)*incx] (input/output)
	complex<float> *y,		// y[1+(n-1)*incx] (input/output)
	complex<float> *z,		// z[1+(n-1)*incx] (input/output)
	const int &incx,		// (input)
	const float *c,			// c[1+(n-1)*incc] (input)
	const complex<float> *s,	// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void clar2v_(
	const int *n,			/* (input) */
	complex_float *x,		/* x[1+(n-1)*incx] (input/output) */
	complex_float *y,		/* y[1+(n-1)*incx] (input/output) */
	complex_float *z,		/* z[1+(n-1)*incx] (input/output) */
	const int *incx,		/* (input) */
	const float *c,			/* c[1+(n-1)*incc] (input) */
	const complex_float *s,		/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

