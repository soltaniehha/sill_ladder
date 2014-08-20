#ifdef __cplusplus
extern "C" void dgtsvx_(
	const char &fact,		// (input)
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *dl,		// dl[n-1] (input)
	const double *d,		// d[n] (input)
	const double *du,		// du[n-1] (input)
	double *dlf,			// dlf[n-1] (input or output)
	double *df,			// df[n] (input or output)
	double *duf,			// duf[n-1] (input or output)
	double *du2,			// du2[n-2] (input or output)
	int *ipiv,			// ipiv[n] (input or output)
	const double *b,		// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgtsvx_(
	const char *fact,		/* (input) */
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *dl,		/* dl[n-1] (input) */
	const double *d,		/* d[n] (input) */
	const double *du,		/* du[n-1] (input) */
	double *dlf,			/* dlf[n-1] (input or output) */
	double *df,			/* df[n] (input or output) */
	double *duf,			/* duf[n-1] (input or output) */
	double *du2,			/* du2[n-2] (input or output) */
	int *ipiv,			/* ipiv[n] (input or output) */
	const double *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

