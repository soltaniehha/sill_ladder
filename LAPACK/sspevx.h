#ifdef __cplusplus
extern "C" void sspevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *ap,			// ap[n*(n+1)/2] (input/output)
	const float &vl,		// (input)
	const float &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const float &abstol,		// (input)
	int &m,				// (output)
	float *w,			// w[n] (output)
	float *z,			// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[8*n] (workspace)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sspevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *ap,			/* ap[n*(n+1)/2] (input/output) */
	const float *vl,		/* (input) */
	const float *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const float *abstol,		/* (input) */
	int *m,				/* (output) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[8*n] (workspace) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

