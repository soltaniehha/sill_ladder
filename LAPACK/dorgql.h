#ifdef __cplusplus
extern "C" void dorgql_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *tau,		// tau[k] (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dorgql_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[k] (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

