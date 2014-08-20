#ifdef __cplusplus
extern "C" void dggbal_(
	const char &job,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	double *lscale,			// lscale[n] (output)
	double *rscale,			// rscale[n] (output)
	double *work,			// work[6*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggbal_(
	const char *job,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	double *lscale,			/* lscale[n] (output) */
	double *rscale,			/* rscale[n] (output) */
	double *work,			/* work[6*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

