#ifdef __cplusplus
extern "C" void zsytrs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zsytrs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

