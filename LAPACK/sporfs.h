#ifdef __cplusplus
extern "C" void sporfs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	const float *af,		// af[n][ldaf] (input)
	const int &ldaf,		// (input)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sporfs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const float *af,		/* af[n][ldaf] (input) */
	const int *ldaf,		/* (input) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

