#ifdef __cplusplus
extern "C" void zhpgv_(
	const int &itype,		// (input)
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *ap,		// ap[n*(n+1)/2] (input/output)
	complex<double> *bp,		// bp[n*(n+1)/2] (input/output)
	double *w,			// w[n] (output)
	complex<double> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[max(1, 2*n-1)] (workspace)
	double *rwork,			// rwork[max(1, 3*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhpgv_(
	const int *itype,		/* (input) */
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *ap,		/* ap[n*(n+1)/2] (input/output) */
	complex_double *bp,		/* bp[n*(n+1)/2] (input/output) */
	double *w,			/* w[n] (output) */
	complex_double *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[max(1, 2*n-1)] (workspace) */
	double *rwork,			/* rwork[max(1, 3*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

