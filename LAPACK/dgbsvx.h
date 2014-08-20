#ifdef __cplusplus
extern "C" void dgbsvx_(
	const char &fact,		// (input)
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const int &nrhs,		// (input)
	double *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *afb,			// afb[n][ldafb] (input or output)
	const int &ldafb,		// (input)
	int *ipiv,			// ipiv[n] (input or output)
	char &equed,			// (input or output)
	double *r,			// r[n] (input or output)
	double *c,			// c[n] (input or output)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	double *x,			// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	double *work,			// work[3*n] (workspace/output)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgbsvx_(
	const char *fact,		/* (input) */
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const int *nrhs,		/* (input) */
	double *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *afb,			/* afb[n][ldafb] (input or output) */
	const int *ldafb,		/* (input) */
	int *ipiv,			/* ipiv[n] (input or output) */
	char *equed,			/* (input or output) */
	double *r,			/* r[n] (input or output) */
	double *c,			/* c[n] (input or output) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *x,			/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	double *work,			/* work[3*n] (workspace/output) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

