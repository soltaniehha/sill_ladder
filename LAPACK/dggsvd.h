#ifdef __cplusplus
extern "C" void dggsvd_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	int &k,				// (output)
	int &l,				// (output)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *alpha,			// alpha[n] (output)
	double *beta,			// beta[n] (output)
	double *u,			// u[m][ldu] (output)
	const int &ldu,			// (input)
	double *v,			// v[p][ldv] (output)
	const int &ldv,			// (input)
	double *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	double *work,			// work[?] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggsvd_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *alpha,			/* alpha[n] (output) */
	double *beta,			/* beta[n] (output) */
	double *u,			/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	double *v,			/* v[p][ldv] (output) */
	const int *ldv,			/* (input) */
	double *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	double *work,			/* work[?] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

