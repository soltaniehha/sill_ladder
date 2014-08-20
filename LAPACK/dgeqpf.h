#ifdef __cplusplus
extern "C" void dgeqpf_(
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	double *tau,			// tau[min(m,n)] (output)
	double *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgeqpf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	double *tau,			/* tau[min(m,n)] (output) */
	double *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

