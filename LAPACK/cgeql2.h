#ifdef __cplusplus
extern "C" void cgeql2_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *tau,		// tau[min(m,n)] (output)
	complex<float> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgeql2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *tau,		/* tau[min(m,n)] (output) */
	complex_float *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

