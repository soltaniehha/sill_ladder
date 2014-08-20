#ifdef __cplusplus
extern "C" void sspcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	float *work,			// work[2*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sspcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	float *work,			/* work[2*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

