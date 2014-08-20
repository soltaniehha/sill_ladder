#ifdef __cplusplus
extern "C" void slapmt_(
	const int &forwrd,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	float *x,			// x[n][ldx] (input/output)
	const int &ldx,			// (input)
	const int *k			// k[n] (input)
	);
#else /* ! __cplusplus */
void slapmt_(
	const int *forwrd,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *x,			/* x[n][ldx] (input/output) */
	const int *ldx,			/* (input) */
	const int *k			/* k[n] (input) */
	);
#endif /* ! __cplusplus */

