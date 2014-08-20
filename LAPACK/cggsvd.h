#ifdef __cplusplus
extern "C" void cggsvd_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	int &k,				// (output)
	int &l,				// (output)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *alpha,			// alpha[n] (output)
	float *beta,			// beta[n] (output)
	complex<float> *u,		// u[m][ldu] (output)
	const int &ldu,			// (input)
	complex<float> *v,		// v[p][ldv] (output)
	const int &ldv,			// (input)
	complex<float> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	complex<float> *work,		// work[max(3*n,m,p)+n] (workspace)
	float *rwork,			// rwork[2*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cggsvd_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *alpha,			/* alpha[n] (output) */
	float *beta,			/* beta[n] (output) */
	complex_float *u,		/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	complex_float *v,		/* v[p][ldv] (output) */
	const int *ldv,			/* (input) */
	complex_float *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	complex_float *work,		/* work[max(3*n,m,p)+n] (workspace) */
	float *rwork,			/* rwork[2*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

