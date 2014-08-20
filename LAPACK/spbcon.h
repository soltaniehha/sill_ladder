#ifdef __cplusplus
extern "C" void spbcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	float *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spbcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	float *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

