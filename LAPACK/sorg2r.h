#ifdef __cplusplus
extern "C" void sorg2r_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *tau,		// tau[k] (input)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sorg2r_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *tau,		/* tau[k] (input) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

