#ifdef __cplusplus
extern "C" void chbtrd_(
	const char &vect,		// (input)
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	complex<float> *ab,		// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *d,			// d[n] (output)
	float *e,			// e[n-1] (output)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<float> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chbtrd_(
	const char *vect,		/* (input) */
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	complex_float *ab,		/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *d,			/* d[n] (output) */
	float *e,			/* e[n-1] (output) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_float *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

