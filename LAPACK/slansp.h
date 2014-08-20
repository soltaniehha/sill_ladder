#ifdef __cplusplus
extern "C" float slansp_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slansp_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

