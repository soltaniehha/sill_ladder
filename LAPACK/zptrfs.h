#ifdef __cplusplus
extern "C" void zptrfs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *d,		// d[n] (input)
	const complex<double> *e,	// e[n-1] (input)
	const double *df,		// df[n] (input)
	const complex<double> *ef,	// ef[n-1] (input)
	const complex<double> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zptrfs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *d,		/* d[n] (input) */
	const complex_double *e,	/* e[n-1] (input) */
	const double *df,		/* df[n] (input) */
	const complex_double *ef,	/* ef[n-1] (input) */
	const complex_double *b,	/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

