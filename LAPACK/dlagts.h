#ifdef __cplusplus
extern "C" void dlagts_(
	const int &job,			// (input)
	const int &n,			// (input)
	const double *a,		// a[n] (input)
	const double *b,		// b[n-1] (input)
	const double *c,		// c[n-1] (input)
	const double *d,		// d[n-2] (input)
	const int *in,			// in[n] (input)
	double *y,			// y[n] (input/output)
	double &tol,			// (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlagts_(
	const int *job,			/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n] (input) */
	const double *b,		/* b[n-1] (input) */
	const double *c,		/* c[n-1] (input) */
	const double *d,		/* d[n-2] (input) */
	const int *in,			/* in[n] (input) */
	double *y,			/* y[n] (input/output) */
	double *tol,			/* (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

