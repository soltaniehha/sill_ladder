#ifdef __cplusplus
extern "C" void zupgtr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> *ap,	// ap[n*(n+1)/2] (input)
	const complex<double> *tau,	// tau[n-1] (input)
	complex<double> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	complex<double> *work,		// work[n-1] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zupgtr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *ap,	/* ap[n*(n+1)/2] (input) */
	const complex_double *tau,	/* tau[n-1] (input) */
	complex_double *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	complex_double *work,		/* work[n-1] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

