#ifdef __cplusplus
extern "C" void slaswp_(
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const int &k1,			// (input)
	const int &k2,			// (input)
	const int *ipiv,		// ipiv[m*abs(incx)] (input)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void slaswp_(
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const int *k1,			/* (input) */
	const int *k2,			/* (input) */
	const int *ipiv,		/* ipiv[m*abs(incx)] (input) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

