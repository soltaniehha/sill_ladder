#ifdef __cplusplus
extern "C" void sptsvx_(
	const char &fact,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *d,			// d[n] (input)
	const float *e,			// e[n-1] (input)
	float *df,			// df[n] (input or output)
	float *ef,			// ef[n-1] (input or output)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sptsvx_(
	const char *fact,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e,			/* e[n-1] (input) */
	float *df,			/* df[n] (input or output) */
	float *ef,			/* ef[n-1] (input or output) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

