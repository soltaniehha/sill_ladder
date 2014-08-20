#ifdef __cplusplus
extern "C" float clantb_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<float> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float clantb_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_float *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

