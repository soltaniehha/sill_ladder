#ifdef __cplusplus
extern "C" void dlacpy_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void dlacpy_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

