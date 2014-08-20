#ifdef __cplusplus
extern "C" void sggrqf_(
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *taua,			// taua[min(m,n)] (output)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *taub,			// taub[min(p,n)] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sggrqf_(
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *taua,			/* taua[min(m,n)] (output) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *taub,			/* taub[min(p,n)] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

