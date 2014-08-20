#ifdef __cplusplus
extern "C" void zgebal_(
	const char &job,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	double *scale,			// scale[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgebal_(
	const char *job,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	double *scale,			/* scale[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

