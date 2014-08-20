#ifdef __cplusplus
extern "C" void dlaed0_(
	const int &icompq,		// (input)
	const int &qsiz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	const double *e,		// e[n-1] (input)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *qstore,			// qstore[n][ldqs] (workspace)
	const int &ldqs,		// (input)
	double *work,			// work[?] (workspace)
	int *iwork,			// iwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed0_(
	const int *icompq,		/* (input) */
	const int *qsiz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	const double *e,		/* e[n-1] (input) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *qstore,			/* qstore[n][ldqs] (workspace) */
	const int *ldqs,		/* (input) */
	double *work,			/* work[?] (workspace) */
	int *iwork,			/* iwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

