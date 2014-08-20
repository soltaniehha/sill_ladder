#ifdef __cplusplus
extern "C" void cppequ_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> *ap,	// ap[n*(n+1)/2] (input)
	float *s,			// s[n] (output)
	float &scond,			// (output)
	float &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cppequ_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *ap,	/* ap[n*(n+1)/2] (input) */
	float *s,			/* s[n] (output) */
	float *scond,			/* (output) */
	float *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

