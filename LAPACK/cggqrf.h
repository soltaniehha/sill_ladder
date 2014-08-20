#ifdef __cplusplus
extern "C" void cggqrf_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	complex<float> *a,		// a[m][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *taua,		// taua[min(n,m)] (output)
	complex<float> *b,		// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *taub,		// taub[min(n,p)] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cggqrf_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	complex_float *a,		/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *taua,		/* taua[min(n,m)] (output) */
	complex_float *b,		/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *taub,		/* taub[min(n,p)] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

