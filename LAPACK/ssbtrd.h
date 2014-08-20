#ifdef __cplusplus
extern "C" void ssbtrd_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ssbtrd_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

