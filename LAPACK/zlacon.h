#ifdef __cplusplus
extern "C" void zlacon_(
	const int &n,			// (input)
	complex<double> *v,		// v[n] (workspace)
	complex<double> *x,		// x[n] (input/output)
	double &est,			// (output)
	int &kase			// (input/output)
	);
#else /* ! __cplusplus */
void zlacon_(
	const int *n,			/* (input) */
	complex_double *v,		/* v[n] (workspace) */
	complex_double *x,		/* x[n] (input/output) */
	double *est,			/* (output) */
	int *kase			/* (input/output) */
	);
#endif /* ! __cplusplus */

