#ifdef __cplusplus
extern "C" void cptsvx_(
	const char &fact,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *d,			// d[n] (input)
	const complex<float> *e,	// e[n-1] (input)
	float *df,			// df[n] (input or output)
	complex<float> *ef,		// ef[n-1] (input or output)
	const complex<float> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<float> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cptsvx_(
	const char *fact,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *d,			/* d[n] (input) */
	const complex_float *e,		/* e[n-1] (input) */
	float *df,			/* df[n] (input or output) */
	complex_float *ef,		/* ef[n-1] (input or output) */
	const complex_float *b,		/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_float *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

