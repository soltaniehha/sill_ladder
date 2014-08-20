#ifdef __cplusplus
extern "C" void claqhp_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *ap,		// ap[n*(n+1)/2] (input/output)
	const float *s,			// s[n] (input)
	const float &scond,		// (input)
	const float &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void claqhp_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *ap,		/* ap[n*(n+1)/2] (input/output) */
	const float *s,			/* s[n] (input) */
	const float *scond,		/* (input) */
	const float *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

