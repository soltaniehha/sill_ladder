#ifdef __cplusplus
extern "C" void zggglm_(
	const int &n,			// (input)
	const int &m,			// (input)
	const int &p,			// (input)
	complex<double> *a,		// a[m][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[p][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *d,		// d[n] (input/output)
	complex<double> *x,		// x[m] (output)
	complex<double> *y,		// y[p] (output)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggglm_(
	const int *n,			/* (input) */
	const int *m,			/* (input) */
	const int *p,			/* (input) */
	complex_double *a,		/* a[m][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[p][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *d,		/* d[n] (input/output) */
	complex_double *x,		/* x[m] (output) */
	complex_double *y,		/* y[p] (output) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

