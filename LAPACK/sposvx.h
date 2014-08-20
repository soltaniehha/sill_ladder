#ifdef __cplusplus
extern "C" void sposvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *af,			// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	char &equed,			// (input or output)
	float *s,			// s[n] (input or output)
	float *b,			// b[nrhs][ldb] (input/output)
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
void sposvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *af,			/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	char *equed,			/* (input or output) */
	float *s,			/* s[n] (input or output) */
	float *b,			/* b[nrhs][ldb] (input/output) */
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

