#ifdef __cplusplus
extern "C" void dggsvp_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const double &tola,		// (input)
	const double &tolb,		// (input)
	int &k,				// (output)
	int &l,				// (output)
	double *u,			// u[m][ldu] (output)
	const int &ldu,			// (input)
	double *v,			// v[m][ldv] (output)
	const int &ldv,			// (input)
	double *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	int *iwork,			// iwork[n] (workspace)
	double *tau,			// tau[n] (workspace)
	double *work,			// work[max(3*n,m,p)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggsvp_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const double *tola,		/* (input) */
	const double *tolb,		/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	double *u,			/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	double *v,			/* v[m][ldv] (output) */
	const int *ldv,			/* (input) */
	double *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	double *tau,			/* tau[n] (workspace) */
	double *work,			/* work[max(3*n,m,p)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

