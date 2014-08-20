#ifdef __cplusplus
extern "C" double zlangt_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const complex<double> *dl,	// dl[n-1] (input)
	const complex<double> *d,	// d[n] (input)
	const complex<double> *du	// du[n-1] (input)
	);
#else /* ! __cplusplus */
double zlangt_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *dl,	/* dl[n-1] (input) */
	const complex_double *d,	/* d[n] (input) */
	const complex_double *du	/* du[n-1] (input) */
	);
#endif /* ! __cplusplus */

