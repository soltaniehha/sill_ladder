#ifdef __cplusplus
extern "C" void zgbrfs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const int &nrhs,		// (input)
	const complex<double> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const complex<double> *afb,	// afb[n][ldafb] (input)
	const int &ldafb,		// (input)
	const int *ipiv,		// ipiv[n] (input)
	const complex<double> *b,	// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (input/output)
	const int &ldx,			// (input)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgbrfs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_double *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const complex_double *afb,	/* afb[n][ldafb] (input) */
	const int *ldafb,		/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const complex_double *b,	/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (input/output) */
	const int *ldx,			/* (input) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

