#ifdef __cplusplus
extern "C" void csptrs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<float> *ap,	// ap[n*(n+1)/2] (input)
	const int *ipiv,		// ipiv[n] (input)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void csptrs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_float *ap,	/* ap[n*(n+1)/2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

