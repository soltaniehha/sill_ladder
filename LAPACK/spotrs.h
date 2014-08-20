#ifdef __cplusplus
extern "C" void spotrs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spotrs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

