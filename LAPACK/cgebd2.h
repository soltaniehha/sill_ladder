#ifdef __cplusplus
extern "C" void cgebd2_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[min(m,n)] (output)
	float *e,			// e[min(m,n)-1] (output)
	complex<float> *tauq,		// tauq[min(m,n)] (output)
	complex<float> *taup,		// taup[min(m,n)] (output)
	complex<float> *work,		// work[max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgebd2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[min(m,n)] (output) */
	float *e,			/* e[min(m,n)-1] (output) */
	complex_float *tauq,		/* tauq[min(m,n)] (output) */
	complex_float *taup,		/* taup[min(m,n)] (output) */
	complex_float *work,		/* work[max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

