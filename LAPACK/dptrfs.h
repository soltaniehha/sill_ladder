#ifdef __cplusplus
extern "C" void dptrfs_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n-1] (input)
	const double *df,		// df[n] (input)
	const double *ef,		// ef[n-1] (input)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dptrfs_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n-1] (input) */
	const double *df,		/* df[n] (input) */
	const double *ef,		/* ef[n-1] (input) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

