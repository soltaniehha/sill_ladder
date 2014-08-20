#ifdef __cplusplus
extern "C" void slar2v_(
	const int &n,			// (input)
	float *x,			// x[?] (input/output)
	float *y,			// y[?] (input/output)
	float *z,			// z[?] (input/output)
	const int &incx,		// (input)
	const float *c,			// c[1+(n-1)*incc] (input)
	const float *s,			// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void slar2v_(
	const int *n,			/* (input) */
	float *x,			/* x[?] (input/output) */
	float *y,			/* y[?] (input/output) */
	float *z,			/* z[?] (input/output) */
	const int *incx,		/* (input) */
	const float *c,			/* c[1+(n-1)*incc] (input) */
	const float *s,			/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

