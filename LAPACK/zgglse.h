#ifdef __cplusplus
extern "C" void zgglse_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &p,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *c,		// c[m] (input/output)
	complex<double> *d,		// d[p] (input/output)
	complex<double> *x,		// x[n] (output)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgglse_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *p,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *c,		/* c[m] (input/output) */
	complex_double *d,		/* d[p] (input/output) */
	complex_double *x,		/* x[n] (output) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

