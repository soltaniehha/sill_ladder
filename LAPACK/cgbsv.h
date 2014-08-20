#ifdef __cplusplus
extern "C" void cgbsv_(
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	const int &nrhs,		// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	int *ipiv,			// ipiv[n] (output)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgbsv_(
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	int *ipiv,			/* ipiv[n] (output) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

