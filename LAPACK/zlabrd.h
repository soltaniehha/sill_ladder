#ifdef __cplusplus
extern "C" void zlabrd_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[nb] (output)
	double *e,			// e[nb] (output)
	complex<double> *tauq,		// tauq[nb] (output)
	complex<double> *taup,		// taup[nb] (output)
	complex<double> *x,		// x[nb][ldx] (output)
	const int &ldx,			// (input)
	complex<double> *y,		// y[nb][ldy] (output)
	int &ldy			// (output)
	);
#else /* ! __cplusplus */
void zlabrd_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[nb] (output) */
	double *e,			/* e[nb] (output) */
	complex_double *tauq,		/* tauq[nb] (output) */
	complex_double *taup,		/* taup[nb] (output) */
	complex_double *x,		/* x[nb][ldx] (output) */
	const int *ldx,			/* (input) */
	complex_double *y,		/* y[nb][ldy] (output) */
	int *ldy			/* (output) */
	);
#endif /* ! __cplusplus */

