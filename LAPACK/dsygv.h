#ifdef __cplusplus
extern "C" void dsygv_(
	const int &itype,		// (input)
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *w,			// w[n] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsygv_(
	const int *itype,		/* (input) */
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *w,			/* w[n] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

