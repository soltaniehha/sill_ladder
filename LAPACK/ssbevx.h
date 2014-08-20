#ifdef __cplusplus
extern "C" void ssbevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	const float &vl,		// (input)
	const float &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const float &abstol,		// (input)
	int &m,				// (output)
	float *w,			// w[n] (output)
	float *z,			// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[7*n] (workspace)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssbevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	const float *vl,		/* (input) */
	const float *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const float *abstol,		/* (input) */
	int *m,				/* (output) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[7*n] (workspace) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

