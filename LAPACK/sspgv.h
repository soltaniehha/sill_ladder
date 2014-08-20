#ifdef __cplusplus
extern "C" void sspgv_(
	const int &itype,		// (input)
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[?] (input/output)
	float *bp,			// bp[n*(n+1)/2] (input/output)
	float *w,			// w[n] (output)
	float *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sspgv_(
	const int *itype,		/* (input) */
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[?] (input/output) */
	float *bp,			/* bp[n*(n+1)/2] (input/output) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

