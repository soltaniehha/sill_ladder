#ifdef __cplusplus
extern "C" void zhseqr_(
	const char &job,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<double> *h,		// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	complex<double> *w,		// w[n] (output)
	complex<double> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	complex<double> *work,		// work[n] (workspace)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhseqr_(
	const char *job,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_double *h,		/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	complex_double *w,		/* w[n] (output) */
	complex_double *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	complex_double *work,		/* work[n] (workspace) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

