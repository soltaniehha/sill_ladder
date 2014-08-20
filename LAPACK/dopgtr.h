#ifdef __cplusplus
extern "C" void dopgtr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	const double *tau,		// tau[n-1] (input)
	double *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	double *work,			// work[n-1] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dopgtr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	const double *tau,		/* tau[n-1] (input) */
	double *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	double *work,			/* work[n-1] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

