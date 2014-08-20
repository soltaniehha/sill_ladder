#ifdef __cplusplus
extern "C" void zggsvd_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	int &k,				// (output)
	int &l,				// (output)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *alpha,			// alpha[n] (output)
	double *beta,			// beta[n] (output)
	complex<double> *u,		// u[m][ldu] (output)
	const int &ldu,			// (input)
	complex<double> *v,		// v[p][ldv] (output)
	const int &ldv,			// (input)
	complex<double> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	complex<double> *work,		// work[max(3*n,m,p)+n] (workspace)
	double *rwork,			// rwork[2*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggsvd_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *alpha,			/* alpha[n] (output) */
	double *beta,			/* beta[n] (output) */
	complex_double *u,		/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	complex_double *v,		/* v[p][ldv] (output) */
	const int *ldv,			/* (input) */
	complex_double *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	complex_double *work,		/* work[max(3*n,m,p)+n] (workspace) */
	double *rwork,			/* rwork[2*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

