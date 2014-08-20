#ifdef __cplusplus
extern "C" void zlahrd_(
	const int &n,			// (input)
	const int &k,			// (input)
	const int &nb,			// (input)
	complex<double> *a,		// a[n-k+1][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *tau,		// tau[nb] (output)
	complex<double> *t,		// t[nb][ldt] (output)
	const int &ldt,			// (input)
	complex<double> *y,		// y[nb][ldy] (output)
	const int &ldy			// (input)
	);
#else /* ! __cplusplus */
void zlahrd_(
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const int *nb,			/* (input) */
	complex_double *a,		/* a[n-k+1][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *tau,		/* tau[nb] (output) */
	complex_double *t,		/* t[nb][ldt] (output) */
	const int *ldt,			/* (input) */
	complex_double *y,		/* y[nb][ldy] (output) */
	const int *ldy			/* (input) */
	);
#endif /* ! __cplusplus */

