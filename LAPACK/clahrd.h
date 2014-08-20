#ifdef __cplusplus
extern "C" void clahrd_(
	const int &n,			// (input)
	const int &k,			// (input)
	const int &nb,			// (input)
	complex<float> *a,		// a[n-k+1][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *tau,		// tau[nb] (output)
	complex<float> *t,		// t[nb][ldt] (output)
	const int &ldt,			// (input)
	complex<float> *y,		// y[nb][ldy] (output)
	const int &ldy			// (input)
	);
#else /* ! __cplusplus */
void clahrd_(
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *nb,			/* (input) */
	complex_float *a,		/* a[n-k+1][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *tau,		/* tau[nb] (output) */
	complex_float *t,		/* t[nb][ldt] (output) */
	const int *ldt,			/* (input) */
	complex_float *y,		/* y[nb][ldy] (output) */
	const int *ldy			/* (input) */
	);
#endif /* ! __cplusplus */

