#ifdef __cplusplus
extern "C" void spttrf_(
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n-1] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spttrf_(
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n-1] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

