#ifdef __cplusplus
extern "C" void cgglse_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *c,		// c[m] (input/output)
	complex<float> *d,		// d[p] (input/output)
	complex<float> *x,		// x[n] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgglse_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *c,		/* c[m] (input/output) */
	complex_float *d,		/* d[p] (input/output) */
	complex_float *x,		/* x[n] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

