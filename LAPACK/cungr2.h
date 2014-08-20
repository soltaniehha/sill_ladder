#ifdef __cplusplus
extern "C" void cungr2_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const complex<float> *tau,	// tau[k] (input)
	complex<float> *work,		// work[m] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cungr2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const complex_float *tau,	/* tau[k] (input) */
	complex_float *work,		/* work[m] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

