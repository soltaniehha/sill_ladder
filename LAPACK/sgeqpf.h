#ifdef __cplusplus
extern "C" void sgeqpf_(
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	float *tau,			// tau[min(m,n)] (output)
	float *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgeqpf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	float *tau,			/* tau[min(m,n)] (output) */
	float *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

