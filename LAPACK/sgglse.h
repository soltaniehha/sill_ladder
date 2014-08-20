#ifdef __cplusplus
extern "C" void sgglse_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *c,			// c[m] (input/output)
	float *d,			// d[p] (input/output)
	float *x,			// x[n] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgglse_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *c,			/* c[m] (input/output) */
	float *d,			/* d[p] (input/output) */
	float *x,			/* x[n] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

