#ifdef __cplusplus
extern "C" void sggsvp_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const float &tola,		// (input)
	const float &tolb,		// (input)
	int &k,				// (output)
	int &l,				// (output)
	float *u,			// u[m][ldu] (output)
	const int &ldu,			// (input)
	float *v,			// v[m][ldv] (output)
	const int &ldv,			// (input)
	float *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	int *iwork,			// iwork[n] (workspace)
	float *tau,			// tau[n] (workspace)
	float *work,			// work[max(3*n,m,p)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sggsvp_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const float *tola,		/* (input) */
	const float *tolb,		/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	float *u,			/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	float *v,			/* v[m][ldv] (output) */
	const int *ldv,			/* (input) */
	float *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	float *tau,			/* tau[n] (workspace) */
	float *work,			/* work[max(3*n,m,p)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

