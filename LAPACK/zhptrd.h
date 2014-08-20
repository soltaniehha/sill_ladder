#ifdef __cplusplus
extern "C" void zhptrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	complex<double> *tau,		// tau[n-1] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhptrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	complex_double *tau,		/* tau[n-1] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

