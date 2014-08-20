#ifdef __cplusplus
extern "C" void ssbgv_(
	const char &jobz,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ka,			// (input)
	const int &kb,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *bb,			// bb[n][ldbb] (input/output)
	const int &ldbb,		// (input)
	float *w,			// w[n] (output)
	float *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssbgv_(
	const char *jobz,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ka,			/* (input) */
	const int *kb,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *bb,			/* bb[n][ldbb] (input/output) */
	const int *ldbb,		/* (input) */
	float *w,			/* w[n] (output) */
	float *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

