#ifdef __cplusplus
extern "C" void clapmt_(
	const int &forwrd,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *x,		// x[n][ldx] (input/output)
	const int &ldx,			// (input)
	const int *k			// k[n] (input)
	);
#else /* ! __cplusplus */
void clapmt_(
	const int *forwrd,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *x,		/* x[n][ldx] (input/output) */
	const int *ldx,			/* (input) */
	const int *k			/* k[n] (input) */
	);
#endif /* ! __cplusplus */

