#ifdef __cplusplus
extern "C" void chseqr_(
	const char &job,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<float> *h,		// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	complex<float> *w,		// w[n] (output)
	complex<float> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	complex<float> *work,		// work[n] (workspace)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chseqr_(
	const char *job,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_float *h,		/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	complex_float *w,		/* w[n] (output) */
	complex_float *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	complex_float *work,		/* work[n] (workspace) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

