#ifdef __cplusplus
extern "C" void dlarnv_(
	const int &idist,		// (input)
	int *iseed,			// iseed[4] (input/output)
	const int &n,			// (input)
	double *x			// x[n] (output)
	);
#else /* ! __cplusplus */
void dlarnv_(
	const int *idist,		/* (input) */
	int *iseed,			/* iseed[4] (input/output) */
	const int *n,			/* (input) */
	double *x			/* x[n] (output) */
	);
#endif /* ! __cplusplus */

