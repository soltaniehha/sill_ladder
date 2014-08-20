#ifdef __cplusplus
extern "C" void sgtsvx_(
	const char &fact,		// (input)
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *dl,		// dl[n-1] (input)
	const float *d,			// d[n] (input)
	const float *du,		// du[n-1] (input)
	float *dlf,			// dlf[n-1] (input or output)
	float *df,			// df[n] (input or output)
	float *duf,			// duf[n-1] (input or output)
	float *du2,			// du2[n-2] (input or output)
	int *ipiv,			// ipiv[n] (input or output)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgtsvx_(
	const char *fact,		/* (input) */
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *dl,		/* dl[n-1] (input) */
	const float *d,			/* d[n] (input) */
	const float *du,		/* du[n-1] (input) */
	float *dlf,			/* dlf[n-1] (input or output) */
	float *df,			/* df[n] (input or output) */
	float *duf,			/* duf[n-1] (input or output) */
	float *du2,			/* du2[n-2] (input or output) */
	int *ipiv,			/* ipiv[n] (input or output) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

