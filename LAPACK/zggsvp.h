#ifdef __cplusplus
extern "C" void zggsvp_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const double &tola,		// (input)
	const double &tolb,		// (input)
	int &k,				// (output)
	int &l,				// (output)
	complex<double> *u,		// u[m][ldu] (output)
	const int &ldu,			// (input)
	complex<double> *v,		// v[m][ldv] (output)
	const int &ldv,			// (input)
	complex<double> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	int *iwork,			// iwork[n] (workspace)
	double *rwork,			// rwork[2*n] (workspace)
	complex<double> *tau,		// tau[n] (workspace)
	complex<double> *work,		// work[max(3*n,m,p)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggsvp_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const double *tola,		/* (input) */
	const double *tolb,		/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	complex_double *u,		/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	complex_double *v,		/* v[m][ldv] (output) */
	const int *ldv,			/* (input) */
	complex_double *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	double *rwork,			/* rwork[2*n] (workspace) */
	complex_double *tau,		/* tau[n] (workspace) */
	complex_double *work,		/* work[max(3*n,m,p)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

