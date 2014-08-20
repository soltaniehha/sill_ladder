#ifdef __cplusplus
extern "C" void slaqsb_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	float *ab,			// ab[n][ldab] (input/output)
	const int &ldab,		// (input)
	float *s,			// s[n] (output)
	const float &scond,		// (input)
	const float &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void slaqsb_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	float *ab,			/* ab[n][ldab] (input/output) */
	const int *ldab,		/* (input) */
	float *s,			/* s[n] (output) */
	const float *scond,		/* (input) */
	const float *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

