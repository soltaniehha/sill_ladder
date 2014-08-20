#ifdef __cplusplus
extern "C" void cggrqf_(
	const int &m,			// (input)
	const int &p,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *taua,		// taua[min(m,n)] (output)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *taub,		// taub[min(p,n)] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cggrqf_(
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *taua,		/* taua[min(m,n)] (output) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *taub,		/* taub[min(p,n)] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

