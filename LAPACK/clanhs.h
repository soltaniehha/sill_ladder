#ifdef __cplusplus
extern "C" float clanhs_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float clanhs_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

