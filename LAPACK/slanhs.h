#ifdef __cplusplus
extern "C" float slanhs_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slanhs_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

