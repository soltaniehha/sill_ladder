#ifdef __cplusplus
extern "C" float clangt_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const complex<float> *dl,	// dl[n-1] (input)
	const complex<float> *d,	// d[n] (input)
	const complex<float> *du	// du[n-1] (input)
	);
#else /* ! __cplusplus */
float clangt_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *dl,	/* dl[n-1] (input) */
	const complex_float *d,		/* d[n] (input) */
	const complex_float *du		/* du[n-1] (input) */
	);
#endif /* ! __cplusplus */

