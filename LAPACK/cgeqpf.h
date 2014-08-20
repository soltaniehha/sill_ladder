#ifdef __cplusplus
extern "C" void cgeqpf_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	complex<float> *tau,		// tau[min(m,n)] (output)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgeqpf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	complex_float *tau,		/* tau[min(m,n)] (output) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

