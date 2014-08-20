#ifdef __cplusplus
extern "C" void zlatrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *e,			// e[n-1] (output)
	complex<double> *tau,		// tau[n-1] (output)
	complex<double> *w,		// w[nb][ldw] (output)
	const int &ldw			// (input)
	);
#else /* ! __cplusplus */
void zlatrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *e,			/* e[n-1] (output) */
	complex_double *tau,		/* tau[n-1] (output) */
	complex_double *w,		/* w[nb][ldw] (output) */
	const int *ldw			/* (input) */
	);
#endif /* ! __cplusplus */

