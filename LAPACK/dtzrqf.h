#ifdef __cplusplus
extern "C" void dtzrqf_(
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *tau,			// tau[m] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtzrqf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *tau,			/* tau[m] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

