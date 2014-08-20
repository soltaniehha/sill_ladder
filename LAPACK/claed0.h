#ifdef __cplusplus
extern "C" void claed0_(
	const int &qsiz,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n-1] (input/output)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<float> *qstore,		// qstore[n][ldqs] (workspace)
	const int &ldqs,		// (input)
	float *rwork,			// rwork[?] (workspace)
	int *iwork,			// iwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void claed0_(
	const int *qsiz,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n-1] (input/output) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_float *qstore,		/* qstore[n][ldqs] (workspace) */
	const int *ldqs,		/* (input) */
	float *rwork,			/* rwork[?] (workspace) */
	int *iwork,			/* iwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

