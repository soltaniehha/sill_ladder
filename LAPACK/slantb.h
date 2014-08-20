#ifdef __cplusplus
extern "C" float slantb_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slantb_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

