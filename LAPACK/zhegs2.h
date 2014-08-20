#ifdef __cplusplus
extern "C" void zhegs2_(
	const int &itype,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const complex<double> *b,	// b[n][ldb] (input)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhegs2_(
	const int *itype,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const complex_double *b,	/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

