#ifdef __cplusplus
extern "C" void ssygs2_(
	const int &itype,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *b,			// b[n][ldb] (input)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssygs2_(
	const int *itype,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *b,			/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

