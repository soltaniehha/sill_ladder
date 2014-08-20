#ifdef __cplusplus
extern "C" void sptcon_(
	const int &n,			// (input)
	const float *d,			// d[n] (input)
	const float *e,			// e[n-1] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sptcon_(
	const int *n,			/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e,			/* e[n-1] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

