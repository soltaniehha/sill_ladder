#ifdef __cplusplus
extern "C" void zpbsvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const int &nrhs,		// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<double> *afb,		// afb[n][ldafb] (input or output)
	const int &ldafb,		// (input)
	char &equed,			// (input or output)
	double *s,			// s[n] (input or output)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	double &rcond,			// (output)
	double *ferr,			// ferr[nrhs] (output)
	double *berr,			// berr[nrhs] (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zpbsvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_double *afb,		/* afb[n][ldafb] (input or output) */
	const int *ldafb,		/* (input) */
	char *equed,			/* (input or output) */
	double *s,			/* s[n] (input or output) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	double *rcond,			/* (output) */
	double *ferr,			/* ferr[nrhs] (output) */
	double *berr,			/* berr[nrhs] (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

