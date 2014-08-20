#ifdef __cplusplus
extern "C" void zgeqpf_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	complex<double> *tau,		// tau[min(m,n)] (output)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgeqpf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	complex_double *tau,		/* tau[min(m,n)] (output) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

