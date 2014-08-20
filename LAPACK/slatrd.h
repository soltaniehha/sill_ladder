#ifdef __cplusplus
extern "C" void slatrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *e,			// e[n-1] (output)
	float *tau,			// tau[n-1] (output)
	float *w,			// w[nb][ldw] (output)
	const int &ldw			// (input)
	);
#else /* ! __cplusplus */
void slatrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *e,			/* e[n-1] (output) */
	float *tau,			/* tau[n-1] (output) */
	float *w,			/* w[nb][ldw] (output) */
	const int *ldw			/* (input) */
	);
#endif /* ! __cplusplus */

