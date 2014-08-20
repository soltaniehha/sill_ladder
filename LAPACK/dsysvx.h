#ifdef __cplusplus
extern "C" void dsysvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	double *af,			// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	int *ipiv,			// ipiv[n] (input or output)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsysvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *af,			/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	int *ipiv,			/* ipiv[n] (input or output) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

