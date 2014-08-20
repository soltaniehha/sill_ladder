#ifdef __cplusplus
extern "C" void ssycon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	float *work,			// work[2*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssycon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	float *work,			/* work[2*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

