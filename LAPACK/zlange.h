#ifdef __cplusplus
extern "C" double zlange_(
	const char &norm,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double zlange_(
	const char *norm,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

