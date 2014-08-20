#ifdef __cplusplus
extern "C" double zlanht_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const double *d,		// d[n] (input)
	const complex<double> *e	// e[n-1] (input)
	);
#else /* ! __cplusplus */
double zlanht_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const double *d,		/* d[n] (input) */
	const complex_double *e		/* e[n-1] (input) */
	);
#endif /* ! __cplusplus */

