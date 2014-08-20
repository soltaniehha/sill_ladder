#ifdef __cplusplus
extern "C" double dlantp_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double dlantp_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

