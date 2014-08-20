#ifdef __cplusplus
extern "C" void zhgeqz_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *alpha,		// alpha[n] (output)
	complex<double> *beta,		// beta[n] (output)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<double> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhgeqz_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *alpha,		/* alpha[n] (output) */
	complex_double *beta,		/* beta[n] (output) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_double *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

