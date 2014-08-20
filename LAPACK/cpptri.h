#ifdef __cplusplus
extern "C" void cpptri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cpptri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

