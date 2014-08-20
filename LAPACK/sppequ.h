#ifdef __cplusplus
extern "C" void sppequ_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	float *s,			// s[n] (output)
	float &scond,			// (output)
	float &amax,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sppequ_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	float *s,			/* s[n] (output) */
	float *scond,			/* (output) */
	float *amax,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

