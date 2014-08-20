#ifdef __cplusplus
extern "C" void slargv_(
	const int &n,			// (input)
	float *x,			// x[?] (input/output)
	const int &incx,		// (input)
	float *y,			// y[?] (input/output)
	const int &incy,		// (input)
	float *c,			// c[1+(n-1)*incc] (output)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void slargv_(
	const int *n,			/* (input) */
	float *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	float *y,			/* y[?] (input/output) */
	const int *incy,		/* (input) */
	float *c,			/* c[1+(n-1)*incc] (output) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

