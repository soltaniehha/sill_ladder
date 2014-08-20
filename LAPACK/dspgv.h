#ifdef __cplusplus
extern "C" void dspgv_(
	const int &itype,		// (input)
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	double *ap,			// ap[?] (input/output)
	double *bp,			// bp[n*(n+1)/2] (input/output)
	double *w,			// w[n] (output)
	double *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dspgv_(
	const int *itype,		/* (input) */
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	double *ap,			/* ap[?] (input/output) */
	double *bp,			/* bp[n*(n+1)/2] (input/output) */
	double *w,			/* w[n] (output) */
	double *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

