#ifdef __cplusplus
extern "C" double dlantb_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const double *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double dlantb_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const double *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

