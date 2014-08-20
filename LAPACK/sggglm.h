#ifdef __cplusplus
extern "C" void sggglm_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	float *a,			// a[m][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	float *d,			// d[n] (input/output)
	float *x,			// x[m] (output)
	float *y,			// y[p] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sggglm_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	float *a,			/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *x,			/* x[m] (output) */
	float *y,			/* y[p] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

