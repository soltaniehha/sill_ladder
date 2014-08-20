#ifdef __cplusplus
extern "C" void zhpgst_(
	const int &itype,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	const complex<double> *bp,	// bp[n*(n+1)/2] (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhpgst_(
	const int *itype,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	const complex_double *bp,	/* bp[n*(n+1)/2] (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

