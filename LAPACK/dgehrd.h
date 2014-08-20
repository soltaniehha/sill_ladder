#ifdef __cplusplus
extern "C" void dgehrd_(
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *tau,			// tau[n-1] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgehrd_(
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *tau,			/* tau[n-1] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

