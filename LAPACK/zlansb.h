#ifdef __cplusplus
extern "C" double zlansb_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<double> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double zlansb_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_double *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

