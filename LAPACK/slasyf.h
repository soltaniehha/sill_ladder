#ifdef __cplusplus
extern "C" void slasyf_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	int &kb,			// (output)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	float *w,			// w[nb][ldw] (workspace)
	const int &ldw,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slasyf_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	int *kb,			/* (output) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	float *w,			/* w[nb][ldw] (workspace) */
	const int *ldw,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

