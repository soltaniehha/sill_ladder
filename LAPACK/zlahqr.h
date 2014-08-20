#ifdef __cplusplus
extern "C" void zlahqr_(
	const int &wantt,		// (input)
	const int &wantz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<double> *h,		// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	complex<double> *w,		// w[n] (output)
	const int &iloz,		// (input)
	const int &ihiz,		// (input)
	complex<double> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlahqr_(
	const int *wantt,		/* (input) */
	const int *wantz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_double *h,		/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	complex_double *w,		/* w[n] (output) */
	const int *iloz,		/* (input) */
	const int *ihiz,		/* (input) */
	complex_double *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

