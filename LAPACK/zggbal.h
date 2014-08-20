#ifdef __cplusplus
extern "C" void zggbal_(
	const char &job,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	double *lscale,			// lscale[n] (output)
	double *rscale,			// rscale[n] (output)
	double *work,			// work[6*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggbal_(
	const char *job,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	double *lscale,			/* lscale[n] (output) */
	double *rscale,			/* rscale[n] (output) */
	double *work,			/* work[6*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

