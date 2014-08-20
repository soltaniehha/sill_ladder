#ifdef __cplusplus
extern "C" void chesv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chesv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

