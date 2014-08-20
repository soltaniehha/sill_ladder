#ifdef __cplusplus
extern "C" void cptrfs_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *d,			// d[n] (input)
	const complex<float> *e,	// e[n-1] (input)
	const float *df,		// df[n] (input)
	const complex<float> *ef,	// ef[n-1] (input)
	const complex<float> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<float> *x,		// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cptrfs_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *d,			/* d[n] (input) */
	const complex_float *e,		/* e[n-1] (input) */
	const float *df,		/* df[n] (input) */
	const complex_float *ef,	/* ef[n-1] (input) */
	const complex_float *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_float *x,		/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

