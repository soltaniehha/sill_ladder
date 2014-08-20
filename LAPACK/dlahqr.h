#ifdef __cplusplus
extern "C" void dlahqr_(
	const int &wantt,		// (input)
	const int &wantz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *h,			// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	double *wr,			// wr[n] (output)
	double *wi,			// wi[n] (output)
	const int &iloz,		// (input)
	const int &ihiz,		// (input)
	double *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlahqr_(
	const int *wantt,		/* (input) */
	const int *wantz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *h,			/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	double *wr,			/* wr[n] (output) */
	double *wi,			/* wi[n] (output) */
	const int *iloz,		/* (input) */
	const int *ihiz,		/* (input) */
	double *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

