#ifdef __cplusplus
extern "C" void slartv_(
	const int &n,			// (input)
	float *x,			// x[?] (input/output)
	const int &incx,		// (input)
	float *y,			// y[?] (input/output)
	const int &incy,		// (input)
	const float *c,			// c[1+(n-1)*incc] (input)
	const float *s,			// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void slartv_(
	const int *n,			/* (input) */
	float *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	float *y,			/* y[?] (input/output) */
	const int *incy,		/* (input) */
	const float *c,			/* c[1+(n-1)*incc] (input) */
	const float *s,			/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

