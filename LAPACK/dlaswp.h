#ifdef __cplusplus
extern "C" void dlaswp_(
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const int &k1,			// (input)
	const int &k2,			// (input)
	const int *ipiv,		// ipiv[m*abs(incx)] (input)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void dlaswp_(
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const int *k1,			/* (input) */
	const int *k2,			/* (input) */
	const int *ipiv,		/* ipiv[m*abs(incx)] (input) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

