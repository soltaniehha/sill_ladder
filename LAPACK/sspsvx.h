#ifdef __cplusplus
extern "C" void sspsvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	float *afp,			// afp[?] (input or output)
	int *ipiv,			// ipiv[n] (input or output)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sspsvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	float *afp,			/* afp[?] (input or output) */
	int *ipiv,			/* ipiv[n] (input or output) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

