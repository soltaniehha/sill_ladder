#ifdef __cplusplus
extern "C" void slarnv_(
	const int &idist,		// (input)
	int *iseed,			// iseed[4] (input/output)
	const int &n,			// (input)
	float *x			// x[n] (output)
	);
#else /* ! __cplusplus */
void slarnv_(
	const int *idist,		/* (input) */
	int *iseed,			/* iseed[4] (input/output) */
	const int *n,			/* (input) */
	float *x			/* x[n] (output) */
	);
#endif /* ! __cplusplus */

