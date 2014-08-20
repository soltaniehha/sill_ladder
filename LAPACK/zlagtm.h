#ifdef __cplusplus
extern "C" void zlagtm_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double &alpha,		// (input)
	const complex<double> *dl,	// dl[n-1] (input)
	const complex<double> *d,	// d[n] (input)
	const complex<double> *du,	// du[n-1] (input)
	const complex<double> *x,	// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	const double &beta,		// (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void zlagtm_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *alpha,		/* (input) */
	const complex_double *dl,	/* dl[n-1] (input) */
	const complex_double *d,	/* d[n] (input) */
	const complex_double *du,	/* du[n-1] (input) */
	const complex_double *x,	/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	const double *beta,		/* (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

