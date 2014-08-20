#ifdef __cplusplus
extern "C" void csycon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	complex<float> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void csycon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

