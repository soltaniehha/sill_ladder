#ifdef __cplusplus
extern "C" void chpgv_(
	const int &itype,		// (input)
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	complex<float> *bp,		// bp[n*(n+1)/2] (input/output)
	float *w,			// w[n] (output)
	complex<float> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[max(1, 2*n-1)] (workspace)
	float *rwork,			// rwork[max(1, 3*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chpgv_(
	const int *itype,		/* (input) */
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	complex_float *bp,		/* bp[n*(n+1)/2] (input/output) */
	float *w,			/* w[n] (output) */
	complex_float *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[max(1, 2*n-1)] (workspace) */
	float *rwork,			/* rwork[max(1, 3*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

