#ifdef __cplusplus
extern "C" void sspevd_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	float *w,			// w[n] (output)
	float *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[?] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sspevd_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[?] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

