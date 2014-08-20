#ifdef __cplusplus
extern "C" void zlapmt_(
	const int &forwrd,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *x,		// x[n][ldx] (input/output)
	const int &ldx,			// (input)
	const int *k			// k[n] (input)
	);
#else /* ! __cplusplus */
void zlapmt_(
	const int *forwrd,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *x,		/* x[n][ldx] (input/output) */
	const int *ldx,			/* (input) */
	const int *k			/* k[n] (input) */
	);
#endif /* ! __cplusplus */

