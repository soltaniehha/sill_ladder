#ifdef __cplusplus
extern "C" void dggglm_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	double *a,			// a[m][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	double *d,			// d[n] (input/output)
	double *x,			// x[m] (output)
	double *y,			// y[p] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggglm_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	double *a,			/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *x,			/* x[m] (output) */
	double *y,			/* y[p] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

