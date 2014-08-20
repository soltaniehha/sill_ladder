#ifdef __cplusplus
extern "C" void slahqr_(
	const int &wantt,		// (input)
	const int &wantz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	float *h,			// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	const int &iloz,		// (input)
	const int &ihiz,		// (input)
	float *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slahqr_(
	const int *wantt,		/* (input) */
	const int *wantz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	float *h,			/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	const int *iloz,		/* (input) */
	const int *ihiz,		/* (input) */
	float *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

