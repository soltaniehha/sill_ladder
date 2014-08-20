#ifdef __cplusplus
extern "C" void dsprfs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	const double *afp,		// afp[n*(n+1)/2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsprfs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	const double *afp,		/* afp[n*(n+1)/2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

