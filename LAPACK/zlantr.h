#ifdef __cplusplus
extern "C" double zlantr_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double zlantr_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

