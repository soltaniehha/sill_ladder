#ifdef __cplusplus
extern "C" void slasrt_(
	const char &id,			// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slasrt_(
	const char *id,			/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

