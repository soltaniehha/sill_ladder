#ifdef __cplusplus
extern "C" void cptcon_(
	const int &n,			// (input)
	const float *d,			// d[n] (input)
	const complex<float> *e,	// e[n-1] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cptcon_(
	const int *n,			/* (input) */
	const float *d,			/* d[n] (input) */
	const complex_float *e,		/* e[n-1] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

