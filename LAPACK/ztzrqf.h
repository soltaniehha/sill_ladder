#ifdef __cplusplus
extern "C" void ztzrqf_(
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *tau,		// tau[m] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztzrqf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *tau,		/* tau[m] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

