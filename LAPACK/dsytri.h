#ifdef __cplusplus
extern "C" void dsytri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsytri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

