#ifdef __cplusplus
extern "C" void ctgsja_(
	const char &jobu,		// (input)
	const char &jobv,		// (input)
	const char &jobq,		// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const int &l,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	const float &tola,		// (input)
	const float &tolb,		// (input)
	float *alpha,			// alpha[n] (output)
	float *beta,			// beta[n] (output)
	complex<float> *u,		// u[m][ldu] (input/output)
	const int &ldu,			// (input)
	complex<float> *v,		// v[p][ldv] (input/output)
	const int &ldv,			// (input)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<float> *work,		// work[2*n] (workspace)
	int &ncycle,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctgsja_(
	const char *jobu,		/* (input) */
	const char *jobv,		/* (input) */
	const char *jobq,		/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *l,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	const float *tola,		/* (input) */
	const float *tolb,		/* (input) */
	float *alpha,			/* alpha[n] (output) */
	float *beta,			/* beta[n] (output) */
	complex_float *u,		/* u[m][ldu] (input/output) */
	const int *ldu,			/* (input) */
	complex_float *v,		/* v[p][ldv] (input/output) */
	const int *ldv,			/* (input) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_float *work,		/* work[2*n] (workspace) */
	int *ncycle,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

