#ifdef __cplusplus
extern "C" void zptsvx_(
	const char &fact,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *d,		// d[n] (input)
	const complex<double> *e,	// e[n-1] (input)
	double *df,			// df[n] (input or output)
	complex<double> *ef,		// ef[n-1] (input or output)
	const complex<double> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zptsvx_(
	const char *fact,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *d,		/* d[n] (input) */
	const complex_double *e,	/* e[n-1] (input) */
	double *df,			/* df[n] (input or output) */
	complex_double *ef,		/* ef[n-1] (input or output) */
	const complex_double *b,	/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

