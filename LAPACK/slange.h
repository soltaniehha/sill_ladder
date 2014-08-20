#ifdef __cplusplus
extern "C" float slange_(
	const char &norm,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slange_(
	const char *norm,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

