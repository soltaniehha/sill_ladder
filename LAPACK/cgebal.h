#ifdef __cplusplus
extern "C" void cgebal_(
	const char &job,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	float *scale,			// scale[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgebal_(
	const char *job,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	float *scale,			/* scale[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

