#ifdef __cplusplus
extern "C" void ssbev_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *w,			// w[n] (output)
	float *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[max(1,3*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssbev_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[max(1,3*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

