#ifdef __cplusplus
extern "C" float slanst_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const float *d,			// d[n] (input)
	const float *e			// e[n-1] (input)
	);
#else /* ! __cplusplus */
float slanst_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e			/* e[n-1] (input) */
	);
#endif /* ! __cplusplus */

