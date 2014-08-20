#ifdef __cplusplus
extern "C" void dlargv_(
	const int &n,			// (input)
	double *x,			// x[?] (input/output)
	const int &incx,		// (input)
	double *y,			// y[?] (input/output)
	const int &incy,		// (input)
	double *c,			// c[1+(n-1)*incc] (output)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void dlargv_(
	const int *n,			/* (input) */
	double *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	double *y,			/* y[?] (input/output) */
	const int *incy,		/* (input) */
	double *c,			/* c[1+(n-1)*incc] (output) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

