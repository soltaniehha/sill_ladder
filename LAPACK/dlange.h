#ifdef __cplusplus
extern "C" double dlange_(
	const char &norm,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double dlange_(
	const char *norm,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

