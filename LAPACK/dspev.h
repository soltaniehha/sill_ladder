#ifdef __cplusplus
extern "C" void dspev_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[n*(n+1)/2] (input/output)
	double *w,			// w[n] (output)
	double *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dspev_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[n*(n+1)/2] (input/output) */
	double *w,			/* w[n] (output) */
	double *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

