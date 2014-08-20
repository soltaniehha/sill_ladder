#ifdef __cplusplus
extern "C" void dlaruv_(
	int *iseed,			// iseed[4] (input/output)
	const int &n,			// (input)
	double *x			// x[n] (output)
	);
#else /* ! __cplusplus */
void dlaruv_(
	int *iseed,			/* iseed[4] (input/output) */
	const int *n,			/* (input) */
	double *x			/* x[n] (output) */
	);
#endif /* ! __cplusplus */

