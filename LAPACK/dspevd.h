#ifdef __cplusplus
extern "C" void dspevd_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	double *w,			// w[n] (output)
	double *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[?] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dspevd_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	double *w,			/* w[n] (output) */
	double *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[?] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

