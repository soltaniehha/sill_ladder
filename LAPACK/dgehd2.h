#ifdef __cplusplus
extern "C" void dgehd2_(
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *tau,			// tau[n-1] (output)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgehd2_(
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *tau,			/* tau[n-1] (output) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

