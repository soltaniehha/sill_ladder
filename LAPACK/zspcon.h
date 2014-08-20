#ifdef __cplusplus
extern "C" void zspcon_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> *ap,	// ap[n*(n+1)/2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	complex<double> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zspcon_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *ap,	/* ap[n*(n+1)/2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

