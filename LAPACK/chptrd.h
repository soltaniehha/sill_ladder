#ifdef __cplusplus
extern "C" void chptrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	complex<float> *tau,		// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chptrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	complex_float *tau,		/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

