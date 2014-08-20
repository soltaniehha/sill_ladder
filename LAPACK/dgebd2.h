#ifdef __cplusplus
extern "C" void dgebd2_(
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[min(m,n)] (output)
	double *e,			// e[min(m,n)-1] (output)
	double *tauq,			// tauq[min(m,n)] (output)
	double *taup,			// taup[min(m,n)] (output)
	double *work,			// work[max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgebd2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[min(m,n)] (output) */
	double *e,			/* e[min(m,n)-1] (output) */
	double *tauq,			/* tauq[min(m,n)] (output) */
	double *taup,			/* taup[min(m,n)] (output) */
	double *work,			/* work[max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

