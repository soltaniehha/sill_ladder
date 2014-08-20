#ifdef __cplusplus
extern "C" void sptrfs_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *d,			// d[n] (input)
	const float *e,			// e[n-1] (input)
	const float *df,		// df[n] (input)
	const float *ef,		// ef[n-1] (input)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	float *x,			// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sptrfs_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e,			/* e[n-1] (input) */
	const float *df,		/* df[n] (input) */
	const float *ef,		/* ef[n-1] (input) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	float *x,			/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

