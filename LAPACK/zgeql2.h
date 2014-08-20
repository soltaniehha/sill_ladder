#ifdef __cplusplus
extern "C" void zgeql2_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *tau,		// tau[min(m,n)] (output)
	complex<double> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgeql2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *tau,		/* tau[min(m,n)] (output) */
	complex_double *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

