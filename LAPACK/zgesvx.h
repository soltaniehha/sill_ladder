#ifdef __cplusplus
extern "C" void zgesvx_(
	const char &fact,		// (input)
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *af,		// af[n][ldaf] (input or output)
	const int &ldaf,		// (input)
	int *ipiv,			// ipiv[n] (input or output)
	char &equed,			// (input or output)
	double *r,			// r[n] (input or output)
	double *c,			// c[n] (input or output)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[2*n] (workspace/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgesvx_(
	const char *fact,		/* (input) */
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *af,		/* af[n][ldaf] (input or output) */
	const int *ldaf,		/* (input) */
	int *ipiv,			/* ipiv[n] (input or output) */
	char *equed,			/* (input or output) */
	double *r,			/* r[n] (input or output) */
	double *c,			/* c[n] (input or output) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[2*n] (workspace/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

