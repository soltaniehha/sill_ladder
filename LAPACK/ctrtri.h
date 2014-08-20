#ifdef __cplusplus
extern "C" void ctrtri_(
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrtri_(
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

