#ifdef __cplusplus
extern "C" void zgtrfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<double> *dl,	// dl[n-1] (input)
	const complex<double> *d,	// d[n] (input)
	const complex<double> *du,	// du[n-1] (input)
	const complex<double> *dlf,	// dlf[n-1] (input)
	const complex<double> *df,	// df[n] (input)
	const complex<double> *duf,	// duf[n-1] (input)
	const complex<double> *du2,	// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const complex<double> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgtrfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_double *dl,	/* dl[n-1] (input) */
	const complex_double *d,	/* d[n] (input) */
	const complex_double *du,	/* du[n-1] (input) */
	const complex_double *dlf,	/* dlf[n-1] (input) */
	const complex_double *df,	/* df[n] (input) */
	const complex_double *duf,	/* duf[n-1] (input) */
	const complex_double *du2,	/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const complex_double *b,	/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

