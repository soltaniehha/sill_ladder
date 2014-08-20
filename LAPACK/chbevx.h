#ifdef __cplusplus
extern "C" void chbevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	complex<float> *q,		// q[n][ldq] (output)
	const int &ldq,			// (input)
	const float &vl,		// (input)
	const float &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const float &abstol,		// (input)
	int &m,				// (output)
	float *w,			// w[n] (output)
	complex<float> *z,		// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[7*n] (workspace)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chbevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	complex_float *q,		/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	const float *vl,		/* (input) */
	const float *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const float *abstol,		/* (input) */
	int *m,				/* (output) */
	float *w,			/* w[n] (output) */
	complex_float *z,		/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[7*n] (workspace) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

