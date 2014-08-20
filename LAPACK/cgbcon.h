#ifdef __cplusplus
extern "C" void cgbcon_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const complex<float> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgbcon_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const complex_float *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

