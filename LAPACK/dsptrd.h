#ifdef __cplusplus
extern "C" void dsptrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	double *tau,			// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsptrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	double *tau,			/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

