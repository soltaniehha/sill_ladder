#ifdef __cplusplus
extern "C" void zgelsx_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	const double &rcond,		// (input)
	int &rank,			// (output)
	complex<double> *work,		// work[?] (workspace)
	double *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgelsx_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	const double *rcond,		/* (input) */
	int *rank,			/* (output) */
	complex_double *work,		/* work[?] (workspace) */
	double *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

