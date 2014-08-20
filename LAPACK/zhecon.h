#ifdef __cplusplus
extern "C" void zhecon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	complex<double> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhecon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

