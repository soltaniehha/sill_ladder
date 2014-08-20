#ifdef __cplusplus
extern "C" void ssptrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	float *tau,			// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssptrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	float *tau,			/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

