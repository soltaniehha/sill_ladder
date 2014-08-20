#ifdef __cplusplus
extern "C" void dlasq4_(
	const int &n,			// (input)
	const double *q,		// q[n] (input)
	const double *e,		// e[n] (input)
	double &tau,			// (output)
	double &sup			// (input/output)
	);
#else /* ! __cplusplus */
void dlasq4_(
	const int *n,			/* (input) */
	const double *q,		/* q[n] (input) */
	const double *e,		/* e[n] (input) */
	double *tau,			/* (output) */
	double *sup			/* (input/output) */
	);
#endif /* ! __cplusplus */

