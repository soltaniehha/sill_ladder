#ifdef __cplusplus
extern "C" void dlapll_(
	const int &n,			// (input)
	double *x,			// x[?] (input/output)
	const int &incx,		// (input)
	double *y,			// y[?] (input/output)
	const int &incy,		// (input)
	double &ssmin			// (output)
	);
#else /* ! __cplusplus */
void dlapll_(
	const int *n,			/* (input) */
	double *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	double *y,			/* y[?] (input/output) */
	const int *incy,		/* (input) */
	double *ssmin			/* (output) */
	);
#endif /* ! __cplusplus */

