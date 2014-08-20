#ifdef __cplusplus
extern "C" void slaruv_(
	int *iseed,			// iseed[4] (input/output)
	const int &n,			// (input)
	float *x			// x[n] (output)
	);
#else /* ! __cplusplus */
void slaruv_(
	int *iseed,			/* iseed[4] (input/output) */
	const int *n,			/* (input) */
	float *x			/* x[n] (output) */
	);
#endif /* ! __cplusplus */

