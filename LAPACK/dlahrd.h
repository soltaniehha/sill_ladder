#ifdef __cplusplus
extern "C" void dlahrd_(
	const int &n,			// (input)
	const int &k,			// (input)
	const int &nb,			// (input)
	double *a,			// a[n-k+1][lda] (input/output)
	const int &lda,			// (input)
	double *tau,			// tau[nb] (output)
	double *t,			// t[nb][ldt] (output)
	const int &ldt,			// (input)
	double *y,			// y[nb][ldy] (output)
	const int &ldy			// (input)
	);
#else /* ! __cplusplus */
void dlahrd_(
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *nb,			/* (input) */
	double *a,			/* a[n-k+1][lda] (input/output) */
	const int *lda,			/* (input) */
	double *tau,			/* tau[nb] (output) */
	double *t,			/* t[nb][ldt] (output) */
	const int *ldt,			/* (input) */
	double *y,			/* y[nb][ldy] (output) */
	const int *ldy			/* (input) */
	);
#endif /* ! __cplusplus */

