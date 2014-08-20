#ifdef __cplusplus
extern "C" void sgtrfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *dl,		// dl[n-1] (input)
	const float *d,			// d[n] (input)
	const float *du,		// du[n-1] (input)
	const float *dlf,		// dlf[n-1] (input)
	const float *df,		// df[n] (input)
	const float *duf,		// duf[n-1] (input)
	const float *du2,		// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgtrfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *dl,		/* dl[n-1] (input) */
	const float *d,			/* d[n] (input) */
	const float *du,		/* du[n-1] (input) */
	const float *dlf,		/* dlf[n-1] (input) */
	const float *df,		/* df[n] (input) */
	const float *duf,		/* duf[n-1] (input) */
	const float *du2,		/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

