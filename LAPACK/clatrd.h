#ifdef __cplusplus
extern "C" void clatrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *e,			// e[n-1] (output)
	complex<float> *tau,		// tau[n-1] (output)
	complex<float> *w,		// w[nb][ldw] (output)
	const int &ldw			// (input)
	);
#else /* ! __cplusplus */
void clatrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *e,			/* e[n-1] (output) */
	complex_float *tau,		/* tau[n-1] (output) */
	complex_float *w,		/* w[nb][ldw] (output) */
	const int *ldw			/* (input) */
	);
#endif /* ! __cplusplus */

