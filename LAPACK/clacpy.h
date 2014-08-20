#ifdef __cplusplus
extern "C" void clacpy_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void clacpy_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

