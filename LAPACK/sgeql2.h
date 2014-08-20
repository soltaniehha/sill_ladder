#ifdef __cplusplus
extern "C" void sgeql2_(
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *tau,			// tau[min(m,n)] (output)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgeql2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *tau,			/* tau[min(m,n)] (output) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

