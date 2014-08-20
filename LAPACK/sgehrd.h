#ifdef __cplusplus
extern "C" void sgehrd_(
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *tau,			// tau[n-1] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgehrd_(
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *tau,			/* tau[n-1] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

