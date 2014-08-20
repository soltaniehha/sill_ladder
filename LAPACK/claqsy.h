#ifdef __cplusplus
extern "C" void claqsy_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *s,			// s[n] (input)
	const float &scond,		// (input)
	const float &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void claqsy_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *s,			/* s[n] (input) */
	const float *scond,		/* (input) */
	const float *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

