#ifdef __cplusplus
extern "C" void cggsvp_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const float &tola,		// (input)
	const float &tolb,		// (input)
	int &k,				// (output)
	int &l,				// (output)
	complex<float> *u,		// u[m][ldu] (output)
	const int &ldu,			// (input)
	complex<float> *v,		// v[m][ldv] (output)
	const int &ldv,			// (input)
	complex<float> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	int *iwork,			// iwork[n] (workspace)
	float *rwork,			// rwork[2*n] (workspace)
	complex<float> *tau,		// tau[n] (workspace)
	complex<float> *work,		// work[max(3*n,m,p)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cggsvp_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const float *tola,		/* (input) */
	const float *tolb,		/* (input) */
	int *k,				/* (output) */
	int *l,				/* (output) */
	complex_float *u,		/* u[m][ldu] (output) */
	const int *ldu,			/* (input) */
	complex_float *v,		/* v[m][ldv] (output) */
	const int *ldv,			/* (input) */
	complex_float *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	float *rwork,			/* rwork[2*n] (workspace) */
	complex_float *tau,		/* tau[n] (workspace) */
	complex_float *work,		/* work[max(3*n,m,p)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

