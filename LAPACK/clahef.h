#ifdef __cplusplus
extern "C" void clahef_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	int &kb,			// (output)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	complex<float> *w,		// w[nb][ldw] (workspace)
	const int &ldw,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void clahef_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	int *kb,			/* (output) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_float *w,		/* w[nb][ldw] (workspace) */
	const int *ldw,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

