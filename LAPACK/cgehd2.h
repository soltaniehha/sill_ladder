#ifdef __cplusplus
extern "C" void cgehd2_(
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *tau,		// tau[n-1] (output)
	complex<float> *work,		// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgehd2_(
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *tau,		/* tau[n-1] (output) */
	complex_float *work,		/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

