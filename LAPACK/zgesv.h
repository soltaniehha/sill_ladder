#ifdef __cplusplus
extern "C" void zgesv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *ipiv,			// ipiv[n] (output)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgesv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

