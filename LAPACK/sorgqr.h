#ifdef __cplusplus
extern "C" void sorgqr_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *tau,		// tau[k] (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sorgqr_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *tau,		/* tau[k] (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

