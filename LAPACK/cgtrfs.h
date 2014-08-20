#ifdef __cplusplus
extern "C" void cgtrfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<float> *dl,	// dl[n-1] (input)
	const complex<float> *d,	// d[n] (input)
	const complex<float> *du,	// du[n-1] (input)
	const complex<float> *dlf,	// dlf[n-1] (input)
	const complex<float> *df,	// df[n] (input)
	const complex<float> *duf,	// duf[n-1] (input)
	const complex<float> *du2,	// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const complex<float> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<float> *x,		// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgtrfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_float *dl,	/* dl[n-1] (input) */
	const complex_float *d,		/* d[n] (input) */
	const complex_float *du,	/* du[n-1] (input) */
	const complex_float *dlf,	/* dlf[n-1] (input) */
	const complex_float *df,	/* df[n] (input) */
	const complex_float *duf,	/* duf[n-1] (input) */
	const complex_float *du2,	/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const complex_float *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_float *x,		/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

