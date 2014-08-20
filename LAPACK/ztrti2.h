#ifdef __cplusplus
extern "C" void ztrti2_(
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztrti2_(
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

