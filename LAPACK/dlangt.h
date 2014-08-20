#ifdef __cplusplus
extern "C" double dlangt_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const double *dl,		// dl[n-1] (input)
	const double *d,		// d[n] (input)
	const double *du		// du[n-1] (input)
	);
#else /* ! __cplusplus */
double dlangt_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const double *dl,		/* dl[n-1] (input) */
	const double *d,		/* d[n] (input) */
	const double *du		/* du[n-1] (input) */
	);
#endif /* ! __cplusplus */

