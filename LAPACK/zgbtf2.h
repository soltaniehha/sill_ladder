#ifdef __cplusplus
extern "C" void zgbtf2_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &kl,			// (input)
	const int &ku,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	int *ipiv,			// ipiv[min(m,n)] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgbtf2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *kl,			/* (input) */
	const int *ku,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	int *ipiv,			/* ipiv[min(m,n)] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

