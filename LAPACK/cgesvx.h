#ifdef __cplusplus
extern "C" void cgesvx_(
	const char &fact,		// (input)
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *af,		// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	int *ipiv,			// ipiv[n] (input or output)
	char &equed,			// (input or output)
	float *r,			// r[n] (input or output)
	float *c,			// c[n] (input or output)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[2*n] (workspace/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgesvx_(
	const char *fact,		/* (input) */
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *af,		/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	int *ipiv,			/* ipiv[n] (input or output) */
	char *equed,			/* (input or output) */
	float *r,			/* r[n] (input or output) */
	float *c,			/* c[n] (input or output) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[2*n] (workspace/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

