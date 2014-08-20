#ifdef __cplusplus
extern "C" void dsyevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double &vl,		// (input)
	const double &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const double &abstol,		// (input)
	int &m,				// (output)
	double *w,			// w[n] (output)
	double *z,			// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsyevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *vl,		/* (input) */
	const double *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const double *abstol,		/* (input) */
	int *m,				/* (output) */
	double *w,			/* w[n] (output) */
	double *z,			/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

