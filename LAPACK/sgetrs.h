#ifdef __cplusplus
extern "C" void sgetrs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *a,			// a[n][lda] (input)
	const int &lda,			// (input)
	const int *ipiv,		// ipiv[n] (input)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgetrs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *a,			/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

