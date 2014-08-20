#ifdef __cplusplus
extern "C" void slaed0_(
	const int &icompq,		// (input)
	const int &qsiz,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	const float *e,			// e[n-1] (input)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	float *qstore,			// qstore[n][ldqs] (workspace)
	const int &ldqs,		// (input)
	float *work,			// work[?] (workspace)
	int *iwork,			// iwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed0_(
	const int *icompq,		/* (input) */
	const int *qsiz,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	const float *e,			/* e[n-1] (input) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	float *qstore,			/* qstore[n][ldqs] (workspace) */
	const int *ldqs,		/* (input) */
	float *work,			/* work[?] (workspace) */
	int *iwork,			/* iwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

