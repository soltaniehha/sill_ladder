#ifdef __cplusplus
extern "C" void zhbev_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *w,			// w[n] (output)
	complex<double> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[max(1,3*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhbev_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *w,			/* w[n] (output) */
	complex_double *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[max(1,3*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

