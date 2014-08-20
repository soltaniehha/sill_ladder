#ifdef __cplusplus
extern "C" void chpevd_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	float *w,			// w[n] (output)
	complex<float> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[lrwork] (workspace/output)
	const int &lrwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chpevd_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	float *w,			/* w[n] (output) */
	complex_float *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[lrwork] (workspace/output) */
	const int *lrwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

