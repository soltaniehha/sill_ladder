#ifdef __cplusplus
extern "C" void zlarnv_(
	const int &idist,		// (input)
	int *iseed,			// iseed[4] (input/output)
	const int &n,			// (input)
	complex<double> *x		// x[n] (output)
	);
#else /* ! __cplusplus */
void zlarnv_(
	const int *idist,		/* (input) */
	int *iseed,			/* iseed[4] (input/output) */
	const int *n,			/* (input) */
	complex_double *x		/* x[n] (output) */
	);
#endif /* ! __cplusplus */

