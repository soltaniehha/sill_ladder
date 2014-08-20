#ifdef __cplusplus
extern "C" void cggbal_(
	const char &job,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	float *lscale,			// lscale[n] (output)
	float *rscale,			// rscale[n] (output)
	float *work,			// work[6*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cggbal_(
	const char *job,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	float *lscale,			/* lscale[n] (output) */
	float *rscale,			/* rscale[n] (output) */
	float *work,			/* work[6*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

