#ifdef __cplusplus
extern "C" void dlagtf_(
	const int &n,			// (input)
	double *a,			// a[n] (input/output)
	const double &lambda,		// (input)
	double *b,			// b[n-1] (input/output)
	double *c,			// c[n-1] (input/output)
	const double &tol,		// (input)
	double *d,			// d[n-2] (output)
	int *in,			// in[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlagtf_(
	const int *n,			/* (input) */
	double *a,			/* a[n] (input/output) */
	const double *lambda,		/* (input) */
	double *b,			/* b[n-1] (input/output) */
	double *c,			/* c[n-1] (input/output) */
	const double *tol,		/* (input) */
	double *d,			/* d[n-2] (output) */
	int *in,			/* in[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

