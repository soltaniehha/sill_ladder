#ifdef __cplusplus
extern "C" void dorghr_(
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *tau,		// tau[n-1] (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dorghr_(
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[n-1] (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

