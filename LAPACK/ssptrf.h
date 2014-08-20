#ifdef __cplusplus
extern "C" void ssptrf_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	int *ipiv,			// ipiv[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssptrf_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	int *ipiv,			/* ipiv[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

