#ifdef __cplusplus
extern "C" void dggqrf_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	double *a,			// a[m][lda] (input/output)
	const int &lda,			// (input)
	double *taua,			// taua[min(n,m)] (output)
	double *b,			// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	double *taub,			// taub[min(n,p)] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggqrf_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	double *a,			/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	double *taua,			/* taua[min(n,m)] (output) */
	double *b,			/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *taub,			/* taub[min(n,p)] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

