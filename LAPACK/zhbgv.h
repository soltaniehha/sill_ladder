#ifdef __cplusplus
extern "C" void zhbgv_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<double> *bb,		// bb[n][ldbb] (input/output)
	const int &ldbb,		// (input)
	double *w,			// w[n] (output)
	complex<double> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhbgv_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_double *bb,		/* bb[n][ldbb] (input/output) */
	const int *ldbb,		/* (input) */
	double *w,			/* w[n] (output) */
	complex_double *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

