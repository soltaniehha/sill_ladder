#ifdef __cplusplus
extern "C" void ctptri_(
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctptri_(
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

