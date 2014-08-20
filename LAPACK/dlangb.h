#ifdef __cplusplus
extern "C" double dlangb_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const double *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double dlangb_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const double *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

