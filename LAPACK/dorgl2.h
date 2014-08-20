#ifdef __cplusplus
extern "C" void dorgl2_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *tau,		// tau[k] (input)
	double *work,			// work[m] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dorgl2_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *tau,		/* tau[k] (input) */
	double *work,			/* work[m] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

