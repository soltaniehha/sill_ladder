#ifdef __cplusplus
extern "C" double dlanst_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const double *d,		// d[n] (input)
	const double *e			// e[n-1] (input)
	);
#else /* ! __cplusplus */
double dlanst_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e			/* e[n-1] (input) */
	);
#endif /* ! __cplusplus */

