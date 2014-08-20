#ifdef __cplusplus
extern "C" void dgeql2_(
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *tau,			// tau[min(m,n)] (output)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgeql2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *tau,			/* tau[min(m,n)] (output) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

