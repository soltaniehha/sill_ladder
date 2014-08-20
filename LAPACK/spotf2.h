#ifdef __cplusplus
extern "C" void spotf2_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spotf2_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

