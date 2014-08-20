#ifdef __cplusplus
extern "C" void dtprfs_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *ap,		// ap[n*(n+1)/2] (input)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	const double *x,		// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtprfs_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *ap,		/* ap[n*(n+1)/2] (input) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	const double *x,		/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

