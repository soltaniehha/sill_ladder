#ifdef __cplusplus
extern "C" float slantr_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	float *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
float slantr_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	float *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

