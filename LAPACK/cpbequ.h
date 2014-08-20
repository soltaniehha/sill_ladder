#ifdef __cplusplus
extern "C" void cpbequ_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const complex<float> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	float *s,			// s[n] (output)
	float &scond,			// (output)
	float &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cpbequ_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const complex_float *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	float *s,			/* s[n] (output) */
	float *scond,			/* (output) */
	float *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

