#ifdef __cplusplus
extern "C" void cggglm_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	complex<float> *a,		// a[m][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	complex<float> *d,		// d[n] (input/output)
	complex<float> *x,		// x[m] (output)
	complex<float> *y,		// y[p] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cggglm_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	complex_float *a,		/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_float *d,		/* d[n] (input/output) */
	complex_float *x,		/* x[m] (output) */
	complex_float *y,		/* y[p] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

