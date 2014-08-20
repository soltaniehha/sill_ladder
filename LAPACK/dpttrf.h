#ifdef __cplusplus
extern "C" void dpttrf_(
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dpttrf_(
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

