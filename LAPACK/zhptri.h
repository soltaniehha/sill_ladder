#ifdef __cplusplus
extern "C" void zhptri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	const int *ipiv,		// ipiv[n] (input)
	complex<double> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhptri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_double *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

