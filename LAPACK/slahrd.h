#ifdef __cplusplus
extern "C" void slahrd_(
	const int &n,			// (input)
	const int &k,			// (input)
	const int &nb,			// (input)
	float *a,			// a[n-k+1][lda] (input/output)
	const int &lda,			// (input)
	float *tau,			// tau[nb] (output)
	float *t,			// t[nb][ldt] (output)
	const int &ldt,			// (input)
	float *y,			// y[nb][ldy] (output)
	const int &ldy			// (input)
	);
#else /* ! __cplusplus */
void slahrd_(
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *nb,			/* (input) */
	float *a,			/* a[n-k+1][lda] (input/output) */
	const int *lda,			/* (input) */
	float *tau,			/* tau[nb] (output) */
	float *t,			/* t[nb][ldt] (output) */
	const int *ldt,			/* (input) */
	float *y,			/* y[nb][ldy] (output) */
	const int *ldy			/* (input) */
	);
#endif /* ! __cplusplus */

