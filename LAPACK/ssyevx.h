#ifdef __cplusplus
extern "C" void ssyevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float &vl,		// (input)
	const float &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const float &abstol,		// (input)
	int &m,				// (output)
	float *w,			// w[n] (output)
	float *z,			// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssyevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *vl,		/* (input) */
	const float *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const float *abstol,		/* (input) */
	int *m,				/* (output) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

