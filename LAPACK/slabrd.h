#ifdef __cplusplus
extern "C" void slabrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *d,			// d[nb] (output)
	float *e,			// e[nb] (output)
	float *tauq,			// tauq[nb] (output)
	float *taup,			// taup[nb] (output)
	float *x,			// x[nb][ldx] (output)
	const int &ldx,			// (input)
	float *y,			// y[nb][ldy] (output)
	int &ldy			// (output)
	);
#else /* ! __cplusplus */
void slabrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *d,			/* d[nb] (output) */
	float *e,			/* e[nb] (output) */
	float *tauq,			/* tauq[nb] (output) */
	float *taup,			/* taup[nb] (output) */
	float *x,			/* x[nb][ldx] (output) */
	const int *ldx,			/* (input) */
	float *y,			/* y[nb][ldy] (output) */
	int *ldy			/* (output) */
	);
#endif /* ! __cplusplus */

