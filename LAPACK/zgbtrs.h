#ifdef __cplusplus
extern "C" void zgbtrs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const int &nrhs,		// (input)
	const complex<double> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	const int *ipiv,		// ipiv[n] (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgbtrs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_double *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

