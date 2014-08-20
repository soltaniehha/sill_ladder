#ifdef __cplusplus
extern "C" void stptri_(
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void stptri_(
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

