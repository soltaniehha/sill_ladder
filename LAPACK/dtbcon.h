#ifdef __cplusplus
extern "C" void dtbcon_(
	const char &norm,		// (input)
	const char &uplo,		// (input)
	const char &diag,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const double *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	double &rcond,			// (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtbcon_(
	const char *norm,		/* (input) */
	const char *uplo,		/* (input) */
	const char *diag,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const double *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

