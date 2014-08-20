#ifdef __cplusplus
extern "C" void zgerq2_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *tau,		// tau[min(m,n)] (output)
	complex<double> *work,		// work[m] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgerq2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *tau,		/* tau[min(m,n)] (output) */
	complex_double *work,		/* work[m] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

