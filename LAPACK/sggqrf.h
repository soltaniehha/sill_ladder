#ifdef __cplusplus
extern "C" void sggqrf_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	float *a,			// a[m][lda] (input/output)
	const int &lda,			// (input)
	float *taua,			// taua[min(n,m)] (output)
	float *b,			// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	float *taub,			// taub[min(n,p)] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sggqrf_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	float *a,			/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	float *taua,			/* taua[min(n,m)] (output) */
	float *b,			/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *taub,			/* taub[min(n,p)] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

