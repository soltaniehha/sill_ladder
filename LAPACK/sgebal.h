#ifdef __cplusplus
extern "C" void sgebal_(
	const char &job,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	float *scale,			// scale[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgebal_(
	const char *job,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	float *scale,			/* scale[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

