#ifdef __cplusplus
extern "C" void dlasrt_(
	const char &id,			// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlasrt_(
	const char *id,			/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

