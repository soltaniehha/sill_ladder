#ifdef __cplusplus
extern "C" void sorgr2_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *tau,		// tau[k] (input)
	float *work,			// work[m] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sorgr2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *tau,		/* tau[k] (input) */
	float *work,			/* work[m] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

