#ifdef __cplusplus
extern "C" void chegv_(
	const int &itype,		// (input)
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *w,			// w[n] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[max(1, 3*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chegv_(
	const int *itype,		/* (input) */
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *w,			/* w[n] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[max(1, 3*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

