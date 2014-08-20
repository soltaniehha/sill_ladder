#ifdef __cplusplus
extern "C" void dpbcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const double *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dpbcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const double *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

