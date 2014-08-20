#ifdef __cplusplus
extern "C" void dtgsja_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const int &l,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const double &tola,		// (input)
	const double &tolb,		// (input)
	double *alpha,			// alpha[n] (output)
	double *beta,			// beta[n] (output)
	double *u,			// u[m][ldu] (input/output)
	const int &ldu,			// (input)
	double *v,			// v[p][ldv] (input/output)
	const int &ldv,			// (input)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *work,			// work[2*n] (workspace)
	int &ncycle,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtgsja_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *l,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const double *tola,		/* (input) */
	const double *tolb,		/* (input) */
	double *alpha,			/* alpha[n] (output) */
	double *beta,			/* beta[n] (output) */
	double *u,			/* u[m][ldu] (input/output) */
	const int *ldu,			/* (input) */
	double *v,			/* v[p][ldv] (input/output) */
	const int *ldv,			/* (input) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *work,			/* work[2*n] (workspace) */
	int *ncycle,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

