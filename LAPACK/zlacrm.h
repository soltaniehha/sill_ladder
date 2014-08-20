#ifdef __cplusplus
extern "C" void zlacrm_(
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const double *b,		// b[n][ldb] (input)
	const int &ldb,			// (input)
	const complex<double> *c,	// c[n][ldc] (input)
	const int &ldc,			// (input)
	double *rwork			// rwork[2*m*n] (workspace)
	);
#else /* ! __cplusplus */
void zlacrm_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const double *b,		/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	const complex_double *c,	/* c[n][ldc] (input) */
	const int *ldc,			/* (input) */
	double *rwork			/* rwork[2*m*n] (workspace) */
	);
#endif /* ! __cplusplus */

