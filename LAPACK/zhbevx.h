#ifdef __cplusplus
extern "C" void zhbevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<double> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<double> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	const double &vl,		// (input)
	const double &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const double &abstol,		// (input)
	int &m,				// (output)
	double *w,			// w[n] (output)
	complex<double> *z,		// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[n] (workspace)
	double *rwork,			// rwork[7*n] (workspace)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhbevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_double *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_double *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	const double *vl,		/* (input) */
	const double *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const double *abstol,		/* (input) */
	int *m,				/* (output) */
	double *w,			/* w[n] (output) */
	complex_double *z,		/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[n] (workspace) */
	double *rwork,			/* rwork[7*n] (workspace) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

