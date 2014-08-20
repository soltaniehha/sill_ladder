#ifdef __cplusplus
extern "C" void cheevd_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *w,			// w[n] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[lrwork] (workspace/output)
	const int &lrwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cheevd_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *w,			/* w[n] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[lrwork] (workspace/output) */
	const int *lrwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

