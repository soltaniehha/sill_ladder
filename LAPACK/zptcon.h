#ifdef __cplusplus
extern "C" void zptcon_(
	const int &n,			// (input)
	const double *d,		// d[n] (input)
	const complex<double> *e,	// e[n-1] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zptcon_(
	const int *n,			/* (input) */
	const double *d,		/* d[n] (input) */
	const complex_double *e,	/* e[n-1] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

