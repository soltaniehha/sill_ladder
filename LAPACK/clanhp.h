#ifdef __cplusplus
extern "C" float clanhp_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> *ap,	// ap[n*(n+1)/2] (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float clanhp_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *ap,	/* ap[n*(n+1)/2] (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

