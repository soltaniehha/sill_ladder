#ifdef __cplusplus
extern "C" void chbev_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *w,			// w[n] (output)
	complex<float> *z,		// z[n][ldz] (output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[n] (workspace)
	float *rwork,			// rwork[max(1,3*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chbev_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *w,			/* w[n] (output) */
	complex_float *z,		/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[n] (workspace) */
	float *rwork,			/* rwork[max(1,3*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

