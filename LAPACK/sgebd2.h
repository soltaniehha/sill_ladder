#ifdef __cplusplus
extern "C" void sgebd2_(
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[min(m,n)] (output)
	float *e,			// e[min(m,n)-1] (output)
	float *tauq,			// tauq[min(m,n)] (output)
	float *taup,			// taup[min(m,n)] (output)
	float *work,			// work[max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgebd2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[min(m,n)] (output) */
	float *e,			/* e[min(m,n)-1] (output) */
	float *tauq,			/* tauq[min(m,n)] (output) */
	float *taup,			/* taup[min(m,n)] (output) */
	float *work,			/* work[max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

