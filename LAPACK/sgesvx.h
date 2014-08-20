#ifdef __cplusplus
extern "C" void sgesvx_(
	const char &fact,		// (input)
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *af,			// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	int *ipiv,			// ipiv[n] (input or output)
	char &equed,			// (input or output)
	float *r,			// r[n] (input or output)
	float *c,			// c[n] (input or output)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[4*n] (workspace/output)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgesvx_(
	const char *fact,		/* (input) */
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *af,			/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	int *ipiv,			/* ipiv[n] (input or output) */
	char *equed,			/* (input or output) */
	float *r,			/* r[n] (input or output) */
	float *c,			/* c[n] (input or output) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[4*n] (workspace/output) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

