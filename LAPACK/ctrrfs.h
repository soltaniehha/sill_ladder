#ifdef __cplusplus
extern "C" void ctrrfs_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const complex<float> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	const complex<float> *x,	// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrrfs_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const complex_float *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	const complex_float *x,		/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

