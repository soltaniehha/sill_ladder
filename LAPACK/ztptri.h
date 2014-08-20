#ifdef __cplusplus
extern "C" void ztptri_(
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztptri_(
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

