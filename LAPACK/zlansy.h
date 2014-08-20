#ifdef __cplusplus
extern "C" double zlansy_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double zlansy_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

