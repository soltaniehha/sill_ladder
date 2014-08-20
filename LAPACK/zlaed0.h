#ifdef __cplusplus
extern "C" void zlaed0_(
	const int &qsiz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<double> *qstore,	// qstore[n][ldqs] (workspace)
	const int &ldqs,		// (input)
	double *rwork,			// rwork[?] (workspace)
	int *iwork,			// iwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlaed0_(
	const int *qsiz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_double *qstore,		/* qstore[n][ldqs] (workspace) */
	const int *ldqs,		/* (input) */
	double *rwork,			/* rwork[?] (workspace) */
	int *iwork,			/* iwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

