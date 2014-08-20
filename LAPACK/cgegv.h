#ifdef __cplusplus
extern "C" void cgegv_(
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *alpha,		// alpha[n] (output)
	complex<float> *beta,		// beta[n] (output)
	complex<float> *vl,		// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	complex<float> *vr,		// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[8*n] (workspace/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgegv_(
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *alpha,		/* alpha[n] (output) */
	complex_float *beta,		/* beta[n] (output) */
	complex_float *vl,		/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	complex_float *vr,		/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[8*n] (workspace/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

