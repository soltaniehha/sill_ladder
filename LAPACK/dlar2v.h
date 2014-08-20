#ifdef __cplusplus
extern "C" void dlar2v_(
	const int &n,			// (input)
	double *x,			// x[?] (input/output)
	double *y,			// y[?] (input/output)
	double *z,			// z[?] (input/output)
	const int &incx,		// (input)
	const double *c,		// c[1+(n-1)*incc] (input)
	const double *s,		// s[1+(n-1)*incc] (input)
	const int &incc			// (input)
	);
#else /* ! __cplusplus */
void dlar2v_(
	const int *n,			/* (input) */
	double *x,			/* x[?] (input/output) */
	double *y,			/* y[?] (input/output) */
	double *z,			/* z[?] (input/output) */
	const int *incx,		/* (input) */
	const double *c,		/* c[1+(n-1)*incc] (input) */
	const double *s,		/* s[1+(n-1)*incc] (input) */
	const int *incc			/* (input) */
	);
#endif /* ! __cplusplus */

