#ifdef __cplusplus
extern "C" double dlansp_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double dlansp_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

