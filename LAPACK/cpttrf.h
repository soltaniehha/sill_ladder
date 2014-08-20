#ifdef __cplusplus
extern "C" void cpttrf_(
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	complex<float> *e,		// e[n-1] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cpttrf_(
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	complex_float *e,		/* e[n-1] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

