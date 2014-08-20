#ifdef __cplusplus
extern "C" void clahqr_(
	const int &wantt,		// (input)
	const int &wantz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<float> *h,		// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	complex<float> *w,		// w[n] (output)
	const int &iloz,		// (input)
	const int &ihiz,		// (input)
	complex<float> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void clahqr_(
	const int *wantt,		/* (input) */
	const int *wantz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_float *h,		/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	complex_float *w,		/* w[n] (output) */
	const int *iloz,		/* (input) */
	const int *ihiz,		/* (input) */
	complex_float *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

