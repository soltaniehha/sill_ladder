#ifdef __cplusplus
extern "C" void cpbsvx_(
	const char &fact,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const int &nrhs,		// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<float> *afb,		// afb[n][ldafb] (input or output)
	const int &ldafb,		// (input)
	char &equed,			// (input or output)
	float *s,			// s[n] (input or output)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *x,		// x[nrhs][ldx] (output)
	const int &ldx,			// (input)
	float &rcond,			// (output)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cpbsvx_(
	const char *fact,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_float *afb,		/* afb[n][ldafb] (input or output) */
	const int *ldafb,		/* (input) */
	char *equed,			/* (input or output) */
	float *s,			/* s[n] (input or output) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *x,		/* x[nrhs][ldx] (output) */
	const int *ldx,			/* (input) */
	float *rcond,			/* (output) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

