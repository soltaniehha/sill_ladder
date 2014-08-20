#ifdef __cplusplus
extern "C" void dgglse_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *c,			// c[m] (input/output)
	double *d,			// d[p] (input/output)
	double *x,			// x[n] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgglse_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *c,			/* c[m] (input/output) */
	double *d,			/* d[p] (input/output) */
	double *x,			/* x[n] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

