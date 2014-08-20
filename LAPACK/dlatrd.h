#ifdef __cplusplus
extern "C" void dlatrd_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &nb,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *e,			// e[n-1] (output)
	double *tau,			// tau[n-1] (output)
	double *w,			// w[nb][ldw] (output)
	const int &ldw			// (input)
	);
#else /* ! __cplusplus */
void dlatrd_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *nb,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *e,			/* e[n-1] (output) */
	double *tau,			/* tau[n-1] (output) */
	double *w,			/* w[nb][ldw] (output) */
	const int *ldw			/* (input) */
	);
#endif /* ! __cplusplus */

