#ifdef __cplusplus
extern "C" void sopgtr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	const float *tau,		// tau[n-1] (input)
	float *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	float *work,			// work[n-1] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sopgtr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	const float *tau,		/* tau[n-1] (input) */
	float *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	float *work,			/* work[n-1] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

