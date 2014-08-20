#ifdef __cplusplus
extern "C" void cupgtr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> *ap,	// ap[n*(n+1)/2] (input)
	const complex<float> *tau,	// tau[n-1] (input)
	complex<float> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	complex<float> *work,		// work[n-1] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cupgtr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *ap,	/* ap[n*(n+1)/2] (input) */
	const complex_float *tau,	/* tau[n-1] (input) */
	complex_float *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	complex_float *work,		/* work[n-1] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

