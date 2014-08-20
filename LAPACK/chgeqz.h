#ifdef __cplusplus
extern "C" void chgeqz_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *alpha,		// alpha[n] (output)
	complex<float> *beta,		// beta[n] (output)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<float> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chgeqz_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *alpha,		/* alpha[n] (output) */
	complex_float *beta,		/* beta[n] (output) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_float *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

