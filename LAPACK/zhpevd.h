#ifdef __cplusplus
extern "C" void zhpevd_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	double *w,			// w[n] (output)
	complex<double> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[?] (workspace/output)
	const int &lrwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhpevd_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	double *w,			/* w[n] (output) */
	complex_double *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[?] (workspace/output) */
	const int *lrwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

