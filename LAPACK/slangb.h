#ifdef __cplusplus
extern "C" float slangb_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slangb_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

