#ifdef __cplusplus
extern "C" void zggrqf_(
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *taua,		// taua[min(m,n)] (output)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *taub,		// taub[min(p,n)] (output)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggrqf_(
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *taua,		/* taua[min(m,n)] (output) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *taub,		/* taub[min(p,n)] (output) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

