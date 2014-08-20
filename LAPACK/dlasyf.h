#ifdef __cplusplus
extern "C" void dlasyf_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	int &kb,			// (output)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	double *w,			// w[nb][ldw] (workspace)
	const int &ldw,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlasyf_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	int *kb,			/* (output) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	double *w,			/* w[nb][ldw] (workspace) */
	const int *ldw,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

