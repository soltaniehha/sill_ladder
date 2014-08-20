#ifdef __cplusplus
extern "C" void cgebrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[min(m,n)] (output)
	float *e,			// e[min(m,n)-1] (output)
	complex<float> *tauq,		// tauq[min(m,n)] (output)
	complex<float> *taup,		// taup[min(m,n)] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgebrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[min(m,n)] (output) */
	float *e,			/* e[min(m,n)-1] (output) */
	complex_float *tauq,		/* tauq[min(m,n)] (output) */
	complex_float *taup,		/* taup[min(m,n)] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

