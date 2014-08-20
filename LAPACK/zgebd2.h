#ifdef __cplusplus
extern "C" void zgebd2_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *d,			// d[min(m,n)] (output)
	double *e,			// e[min(m,n)-1] (output)
	complex<double> *tauq,		// tauq[min(m,n)] (output)
	complex<double> *taup,		// taup[min(m,n)] (output)
	complex<double> *work,		// work[max(m,n)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgebd2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *d,			/* d[min(m,n)] (output) */
	double *e,			/* e[min(m,n)-1] (output) */
	complex_double *tauq,		/* tauq[min(m,n)] (output) */
	complex_double *taup,		/* taup[min(m,n)] (output) */
	complex_double *work,		/* work[max(m,n)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

