#ifdef __cplusplus
extern "C" void dptsvx_(
	const char &fact,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n-1] (input)
	double *df,			// df[n] (input or output)
	double *ef,			// ef[n-1] (input or output)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dptsvx_(
	const char *fact,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n-1] (input) */
	double *df,			/* df[n] (input or output) */
	double *ef,			/* ef[n-1] (input or output) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

