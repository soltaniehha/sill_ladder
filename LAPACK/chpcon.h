#ifdef __cplusplus
extern "C" void chpcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> *ap,	// ap[n*(n+1)/2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	complex<float> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chpcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *ap,	/* ap[n*(n+1)/2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

