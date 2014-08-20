#ifdef __cplusplus
extern "C" void dposvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *af,			// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	char &equed,			// (input or output)
	double *s,			// s[n] (input or output)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dposvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *af,			/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	char *equed,			/* (input or output) */
	double *s,			/* s[n] (input or output) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

