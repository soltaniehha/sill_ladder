#ifdef __cplusplus
extern "C" void ztgsja_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const int &l,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const double &tola,		// (input)
	const double &tolb,		// (input)
	double *alpha,			// alpha[n] (output)
	double *beta,			// beta[n] (output)
	complex<double> *u,		// u[m][ldu] (input/output)
	const int &ldu,			// (input)
	complex<double> *v,		// v[p][ldv] (input/output)
	const int &ldv,			// (input)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<double> *work,		// work[2*n] (workspace)
	int &ncycle,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztgsja_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *l,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const double *tola,		/* (input) */
	const double *tolb,		/* (input) */
	double *alpha,			/* alpha[n] (output) */
	double *beta,			/* beta[n] (output) */
	complex_double *u,		/* u[m][ldu] (input/output) */
	const int *ldu,			/* (input) */
	complex_double *v,		/* v[p][ldv] (input/output) */
	const int *ldv,			/* (input) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_double *work,		/* work[2*n] (workspace) */
	int *ncycle,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

