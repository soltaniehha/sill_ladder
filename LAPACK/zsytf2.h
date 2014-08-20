#ifdef __cplusplus
extern "C" void zsytf2_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zsytf2_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

