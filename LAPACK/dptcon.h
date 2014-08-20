#ifdef __cplusplus
extern "C" void dptcon_(
	const int &n,			// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n-1] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dptcon_(
	const int *n,			/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n-1] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

