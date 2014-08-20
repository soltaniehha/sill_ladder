#ifdef __cplusplus
extern "C" void spptri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spptri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

