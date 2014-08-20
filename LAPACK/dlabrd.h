#ifdef __cplusplus
extern "C" void dlabrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[nb] (output)
	double *e,			// e[nb] (output)
	double *tauq,			// tauq[nb] (output)
	double *taup,			// taup[nb] (output)
	double *x,			// x[nb][ldx] (output)
	const int &ldx,			// (input)
	double *y,			// y[nb][ldy] (output)
	int &ldy			// (output)
	);
#else /* ! __cplusplus */
void dlabrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[nb] (output) */
	double *e,			/* e[nb] (output) */
	double *tauq,			/* tauq[nb] (output) */
	double *taup,			/* taup[nb] (output) */
	double *x,			/* x[nb][ldx] (output) */
	const int *ldx,			/* (input) */
	double *y,			/* y[nb][ldy] (output) */
	int *ldy			/* (output) */
	);
#endif /* ! __cplusplus */

