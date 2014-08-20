#ifdef __cplusplus
extern "C" void zgelss_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	double *s,			// s[min(m,n)] (output)
	const double &rcond,		// (input)
	int &rank,			// (output)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[5*min(m,n)-1] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgelss_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *s,			/* s[min(m,n)] (output) */
	const double *rcond,		/* (input) */
	int *rank,			/* (output) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[5*min(m,n)-1] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

