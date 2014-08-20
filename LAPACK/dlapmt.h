#ifdef __cplusplus
extern "C" void dlapmt_(
	const int &forwrd,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	double *x,			// x[n][ldx] (input/output)
	const int &ldx,			// (input)
	const int *k			// k[n] (input)
	);
#else /* ! __cplusplus */
void dlapmt_(
	const int *forwrd,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *x,			/* x[n][ldx] (input/output) */
	const int *ldx,			/* (input) */
	const int *k			/* k[n] (input) */
	);
#endif /* ! __cplusplus */

