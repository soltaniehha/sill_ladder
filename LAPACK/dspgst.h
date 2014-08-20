#ifdef __cplusplus
extern "C" void dspgst_(
	const int &itype,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	const double *bp,		// bp[n*(n+1)/2] (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dspgst_(
	const int *itype,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	const double *bp,		/* bp[n*(n+1)/2] (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

