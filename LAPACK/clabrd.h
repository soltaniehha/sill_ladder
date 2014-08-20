#ifdef __cplusplus
extern "C" void clabrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[nb] (output)
	float *e,			// e[nb] (output)
	complex<float> *tauq,		// tauq[nb] (output)
	complex<float> *taup,		// taup[nb] (output)
	complex<float> *x,		// x[nb][ldx] (output)
	const int &ldx,			// (input)
	complex<float> *y,		// y[nb][ldy] (output)
	int &ldy			// (output)
	);
#else /* ! __cplusplus */
void clabrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[nb] (output) */
	float *e,			/* e[nb] (output) */
	complex_float *tauq,		/* tauq[nb] (output) */
	complex_float *taup,		/* taup[nb] (output) */
	complex_float *x,		/* x[nb][ldx] (output) */
	const int *ldx,			/* (input) */
	complex_float *y,		/* y[nb][ldy] (output) */
	int *ldy			/* (output) */
	);
#endif /* ! __cplusplus */

