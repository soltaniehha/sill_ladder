#ifdef __cplusplus
extern "C" void stbrfs_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const int &nrhs,		// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const float *b,			// b[nrhs][ldb] (input)
	const int &ldb,			// (input)
	const float *x,			// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	float *ferr,			// ferr[nrhs] (output)
	float *berr,			// berr[nrhs] (output)
	float *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void stbrfs_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const float *b,			/* b[nrhs][ldb] (input) */
	const int *ldb,			/* (input) */
	const float *x,			/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	float *ferr,			/* ferr[nrhs] (output) */
	float *berr,			/* berr[nrhs] (output) */
	float *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

