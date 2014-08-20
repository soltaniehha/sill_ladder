#ifdef __cplusplus
extern "C" void csytri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	complex<float> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void csytri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_float *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

