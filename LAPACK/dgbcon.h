#ifdef __cplusplus
extern "C" void dgbcon_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const double *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const int *ipiv,		// ipiv[n] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	double *work,			// work[3*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgbcon_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const double *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	double *work,			/* work[3*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

