#ifdef __cplusplus
extern "C" float clanht_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const float *d,			// d[n] (input)
	const complex<float> *e		// e[n-1] (input)
	);
#else /* ! __cplusplus */
float clanht_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const float *d,			/* d[n] (input) */
	const complex_float *e		/* e[n-1] (input) */
	);
#endif /* ! __cplusplus */

