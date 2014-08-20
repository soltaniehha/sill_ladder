#ifdef __cplusplus
extern "C" void sggsvd_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	int &k,				// (output)
	int &l,				// (output)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *alpha,			// alpha[n] (output)
	float *beta,			// beta[n] (output)
	float *u,			// u[m][ldu] (output)
	const int &ldu,			// (input)
	float *v,			// v[p][ldv] (output)
	const int &ldv,			// (input)
	float *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	float *work,			// work[?] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sggsvd_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *alpha,			/* alpha[n] (output) */
	float *beta,			/* beta[n] (output) */
	float *u,			/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	float *v,			/* v[p][ldv] (output) */
	const int *ldv,			/* (input) */
	float *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	float *work,			/* work[?] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

