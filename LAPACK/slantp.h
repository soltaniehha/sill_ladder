#ifdef __cplusplus
extern "C" float slantp_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slantp_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

