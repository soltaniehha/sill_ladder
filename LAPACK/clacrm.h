#ifdef __cplusplus
extern "C" void clacrm_(
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const float *b,			// b[n][ldb] (input)
	const int &ldb,			// (input)
	const complex<float> *c,	// c[n][ldc] (input)
	const int &ldc,			// (input)
	float *rwork			// rwork[2*m*n] (workspace)
	);
#else /* ! __cplusplus */
void clacrm_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const float *b,			/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	const complex_float *c,		/* c[n][ldc] (input) */
	const int *ldc,			/* (input) */
	float *rwork			/* rwork[2*m*n] (workspace) */
	);
#endif /* ! __cplusplus */

