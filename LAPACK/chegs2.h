#ifdef __cplusplus
extern "C" void chegs2_(
	const int &itype,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const complex<float> *b,	// b[n][ldb] (input)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chegs2_(
	const int *itype,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const complex_float *b,		/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

