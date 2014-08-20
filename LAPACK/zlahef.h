#ifdef __cplusplus
extern "C" void zlahef_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	int &kb,			// (output)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	complex<double> *w,		// w[nb][ldw] (workspace)
	const int &ldw,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlahef_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	int *kb,			/* (output) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_double *w,		/* w[nb][ldw] (workspace) */
	const int *ldw,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

