#ifdef __cplusplus
extern "C" void clarnv_(
	const int &idist,		// (input)
	int *iseed,			// iseed[4] (input/output)
	const int &n,			// (input)
	complex<float> *x		// x[n] (output)
	);
#else /* ! __cplusplus */
void clarnv_(
	const int *idist,		/* (input) */
	int *iseed,			/* iseed[4] (input/output) */
	const int *n,			/* (input) */
	complex_float *x		/* x[n] (output) */
	);
#endif /* ! __cplusplus */

