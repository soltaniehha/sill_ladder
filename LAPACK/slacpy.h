#ifdef __cplusplus
extern "C" void slacpy_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void slacpy_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

