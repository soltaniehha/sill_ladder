#ifdef __cplusplus
extern "C" void zhpsvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<double> *ap,	// ap[n*(n+1)/2] (input)
	complex<double> *afp,		// afp[n*(n+1)/2] (input or output)
	int *ipiv,			// ipiv[n] (input or output)
	const complex<double> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhpsvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_double *ap,	/* ap[n*(n+1)/2] (input) */
	complex_double *afp,		/* afp[n*(n+1)/2] (input or output) */
	int *ipiv,			/* ipiv[n] (input or output) */
	const complex_double *b,	/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

