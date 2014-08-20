#ifdef __cplusplus
extern "C" void chpgst_(
	const int &itype,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	const complex<float> *bp,	// bp[n*(n+1)/2] (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chpgst_(
	const int *itype,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	const complex_float *bp,	/* bp[n*(n+1)/2] (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

