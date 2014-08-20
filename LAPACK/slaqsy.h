#ifdef __cplusplus
extern "C" void slaqsy_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	const float *s,			// s[n] (input)
	const float &scond,		// (input)
	const float &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void slaqsy_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const float *s,			/* s[n] (input) */
	const float *scond,		/* (input) */
	const float *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

