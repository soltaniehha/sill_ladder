#ifdef __cplusplus
extern "C" float slangt_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const float *dl,		// dl[n-1] (input)
	const float *d,			// d[n] (input)
	const float *du			// du[n-1] (input)
	);
#else /* ! __cplusplus */
float slangt_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const float *dl,		/* dl[n-1] (input) */
	const float *d,			/* d[n] (input) */
	const float *du			/* du[n-1] (input) */
	);
#endif /* ! __cplusplus */

