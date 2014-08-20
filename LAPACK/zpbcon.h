#ifdef __cplusplus
extern "C" void zpbcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const complex<double> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zpbcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const complex_double *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

