#ifdef __cplusplus
extern "C" void dlartv_(
	const int &n,			// (input)
	double *x,			// x[?] (input/output)
	const int &incx,		// (input)
	double *y,			// y[?] (input/output)
	const int &incy,		// (input)
	const double *c,		// c[1+(n-1)*incc] (input)
	const double *s,		// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void dlartv_(
	const int *n,			/* (input) */
	double *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	double *y,			/* y[?] (input/output) */
	const int *incy,		/* (input) */
	const double *c,		/* c[1+(n-1)*incc] (input) */
	const double *s,		/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

