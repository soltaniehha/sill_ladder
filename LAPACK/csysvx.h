#ifdef __cplusplus
extern "C" void csysvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	complex<float> *af,		// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	int *ipiv,			// ipiv[n] (input or output)
	const complex<float> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<float> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void csysvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	complex_float *af,		/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	int *ipiv,			/* ipiv[n] (input or output) */
	const complex_float *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_float *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

