#ifdef __cplusplus
extern "C" void zgttrs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<double> *dl,	// dl[n-1] (input)
	const complex<double> *d,	// d[n] (input)
	const complex<double> *du,	// du[n-1] (input)
	const complex<double> *du2,	// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgttrs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_double *dl,	/* dl[n-1] (input) */
	const complex_double *d,	/* d[n] (input) */
	const complex_double *du,	/* du[n-1] (input) */
	const complex_double *du2,	/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

