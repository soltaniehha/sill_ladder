#ifdef __cplusplus
extern "C" void cppcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> *ap,	// ap[n*(n+1)/2] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cppcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *ap,	/* ap[n*(n+1)/2] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

