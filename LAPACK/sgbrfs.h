#ifdef __cplusplus
extern "C" void sgbrfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const int &nrhs,		// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const float *afb,		// afb[n][ldafb] (input)
	const int &ldafb,		// (input)
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
void sgbrfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const float *afb,		/* afb[n][ldafb] (input) */
	const int *ldafb,		/* (input) */
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

