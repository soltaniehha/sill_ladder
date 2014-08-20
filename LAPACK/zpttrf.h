#ifdef __cplusplus
extern "C" void zpttrf_(
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	complex<double> *e,		// e[n-1] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zpttrf_(
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	complex_double *e,		/* e[n-1] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

