#ifdef __cplusplus
extern "C" void sgebrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[min(m,n)] (output)
	float *e,			// e[min(m,n)-1] (output)
	float *tauq,			// tauq[min(m,n)] (output)
	float *taup,			// taup[min(m,n)] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgebrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[min(m,n)] (output) */
	float *e,			/* e[min(m,n)-1] (output) */
	float *tauq,			/* tauq[min(m,n)] (output) */
	float *taup,			/* taup[min(m,n)] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

