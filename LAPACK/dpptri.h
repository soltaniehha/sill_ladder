#ifdef __cplusplus
extern "C" void dpptri_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dpptri_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

