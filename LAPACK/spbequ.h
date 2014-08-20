#ifdef __cplusplus
extern "C" void spbequ_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const float *ab,		// ab[n][ldab] (input)
	const int &ldab,		// (input)
	float *s,			// s[n] (output)
	float &scond,			// (output)
	float &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spbequ_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const float *ab,		/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	float *s,			/* s[n] (output) */
	float *scond,			/* (output) */
	float *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

