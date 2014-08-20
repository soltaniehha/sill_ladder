#ifdef __cplusplus
extern "C" void dgtrfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *dl,		// dl[n-1] (input)
	const double *d,		// d[n] (input)
	const double *du,		// du[n-1] (input)
	const double *dlf,		// dlf[n-1] (input)
	const double *df,		// df[n] (input)
	const double *duf,		// duf[n-1] (input)
	const double *du2,		// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgtrfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *dl,		/* dl[n-1] (input) */
	const double *d,		/* d[n] (input) */
	const double *du,		/* du[n-1] (input) */
	const double *dlf,		/* dlf[n-1] (input) */
	const double *df,		/* df[n] (input) */
	const double *duf,		/* duf[n-1] (input) */
	const double *du2,		/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

