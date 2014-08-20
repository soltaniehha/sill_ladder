#ifdef __cplusplus
extern "C" void zlacpy_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void zlacpy_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

