#ifdef __cplusplus
extern "C" void cpbcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const complex<float> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cpbcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const complex_float *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

