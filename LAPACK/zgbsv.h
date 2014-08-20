#ifdef __cplusplus
extern "C" void zgbsv_(
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const int &nrhs,		// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	int *ipiv,			// ipiv[n] (output)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgbsv_(
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

