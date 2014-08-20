#ifdef __cplusplus
extern "C" void dggrqf_(
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *taua,			// taua[min(m,n)] (output)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *taub,			// taub[min(p,n)] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggrqf_(
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *taua,			/* taua[min(m,n)] (output) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *taub,			/* taub[min(p,n)] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

