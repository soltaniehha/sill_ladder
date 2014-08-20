#ifdef __cplusplus
extern "C" void ctzrqf_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *tau,		// tau[m] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctzrqf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *tau,		/* tau[m] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

