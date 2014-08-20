#ifdef __cplusplus
extern "C" void csptri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	const int *ipiv,		// ipiv[n] (input)
	complex<float> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void csptri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_float *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

