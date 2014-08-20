#ifdef __cplusplus
extern "C" void dsterf_(
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsterf_(
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

