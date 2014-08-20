#ifdef __cplusplus
extern "C" void zgtcon_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const complex<double> *dl,	// dl[n-1] (input)
	const complex<double> *d,	// d[n] (input)
	const complex<double> *du,	// du[n-1] (input)
	const complex<double> *du2,	// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const double &anorm,		// (input)
	double &rcond,			// (output)
	complex<double> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgtcon_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *dl,	/* dl[n-1] (input) */
	const complex_double *d,	/* d[n] (input) */
	const complex_double *du,	/* du[n-1] (input) */
	const complex_double *du2,	/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const double *anorm,		/* (input) */
	double *rcond,			/* (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

