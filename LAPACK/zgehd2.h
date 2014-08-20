#ifdef __cplusplus
extern "C" void zgehd2_(
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *tau,		// tau[n-1] (output)
	complex<double> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgehd2_(
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *tau,		/* tau[n-1] (output) */
	complex_double *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

