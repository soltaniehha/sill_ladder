#ifdef __cplusplus
extern "C" void zggqrf_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	complex<double> *a,		// a[m][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *taua,		// taua[min(n,m)] (output)
	complex<double> *b,		// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *taub,		// taub[min(n,p)] (output)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggqrf_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	complex_double *a,		/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *taua,		/* taua[min(n,m)] (output) */
	complex_double *b,		/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *taub,		/* taub[min(n,p)] (output) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

