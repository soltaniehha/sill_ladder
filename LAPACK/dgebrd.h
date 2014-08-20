#ifdef __cplusplus
extern "C" void dgebrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[min(m,n)] (output)
	double *e,			// e[min(m,n)-1] (output)
	double *tauq,			// tauq[min(m,n)] (output)
	double *taup,			// taup[min(m,n)] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgebrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[min(m,n)] (output) */
	double *e,			/* e[min(m,n)-1] (output) */
	double *tauq,			/* tauq[min(m,n)] (output) */
	double *taup,			/* taup[min(m,n)] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

