#ifdef __cplusplus
extern "C" void dgerfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	const double *af,		// af[n][ldaf] (input)
	const int &ldaf,		// (input)
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
void dgerfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const double *af,		/* af[n][ldaf] (input) */
	const int *ldaf,		/* (input) */
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

