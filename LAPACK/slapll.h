#ifdef __cplusplus
extern "C" void slapll_(
	const int &n,			// (input)
	float *x,			// x[?] (input/output)
	const int &incx,		// (input)
	float *y,			// y[?] (input/output)
	const int &incy,		// (input)
	float &ssmin			// (output)
	);
#else /* ! __cplusplus */
void slapll_(
	const int *n,			/* (input) */
	float *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	float *y,			/* y[?] (input/output) */
	const int *incy,		/* (input) */
	float *ssmin			/* (output) */
	);
#endif /* ! __cplusplus */

