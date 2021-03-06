#ifdef __cplusplus
extern "C" void zung2l_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const complex<double> *tau,	// tau[k] (input)
	complex<double> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zung2l_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const complex_double *tau,	/* tau[k] (input) */
	complex_double *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

