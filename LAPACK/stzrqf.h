#ifdef __cplusplus
extern "C" void stzrqf_(
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *tau,			// tau[m] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void stzrqf_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *tau,			/* tau[m] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

