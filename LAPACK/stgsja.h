#ifdef __cplusplus
extern "C" void stgsja_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const int &l,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const float &tola,		// (input)
	const float &tolb,		// (input)
	float *alpha,			// alpha[n] (output)
	float *beta,			// beta[n] (output)
	float *u,			// u[m][ldu] (input/output)
	const int &ldu,			// (input)
	float *v,			// v[p][ldv] (input/output)
	const int &ldv,			// (input)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	float *work,			// work[2*n] (workspace)
	int &ncycle,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void stgsja_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *l,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const float *tola,		/* (input) */
	const float *tolb,		/* (input) */
	float *alpha,			/* alpha[n] (output) */
	float *beta,			/* beta[n] (output) */
	float *u,			/* u[m][ldu] (input/output) */
	const int *ldu,			/* (input) */
	float *v,			/* v[p][ldv] (input/output) */
	const int *ldv,			/* (input) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	float *work,			/* work[2*n] (workspace) */
	int *ncycle,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

