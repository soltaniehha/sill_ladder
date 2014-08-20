#ifdef __cplusplus
extern "C" double zlanhp_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> *ap,	// ap[n*(n+1)/2] (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
double zlanhp_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *ap,	/* ap[n*(n+1)/2] (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

