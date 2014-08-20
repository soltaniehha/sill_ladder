#ifdef __cplusplus
extern "C" void zgttrf_(
	const int &n,			// (input)
	complex<double> *dl,		// dl[n-1] (input/output)
	complex<double> *d,		// d[n] (input/output)
	complex<double> *du,		// du[n-1] (input/output)
	complex<double> *du2,		// du2[n-2] (output)
	int *ipiv,			// ipiv[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgttrf_(
	const int *n,			/* (input) */
	complex_double *dl,		/* dl[n-1] (input/output) */
	complex_double *d,		/* d[n] (input/output) */
	complex_double *du,		/* du[n-1] (input/output) */
	complex_double *du2,		/* du2[n-2] (output) */
	int *ipiv,			/* ipiv[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

