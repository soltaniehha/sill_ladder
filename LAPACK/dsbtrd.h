#ifdef __cplusplus
extern "C" void dsbtrd_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	double *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	double *d,			// d[n] (output)
	double *e,			// e[n-1] (output)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsbtrd_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	double *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	double *d,			/* d[n] (output) */
	double *e,			/* e[n-1] (output) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

