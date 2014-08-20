#ifdef __cplusplus
extern "C" void chsein_(
	const char &side,		// (input)
	const char &eigsrc,		// (input)
	const char &initv,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const complex<float> *h,	// h[n][ldh] (input)
	const int &ldh,			// (input)
	complex<float> *w,		// w[n] (input/output)
	complex<float> *vl,		// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	complex<float> *vr,		// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<float> *work,		// work[n*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int *ifaill,			// ifaill[mm] (output)
	int *ifailr,			// ifailr[mm] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void chsein_(
	const char *side,		/* (input) */
	const char *eigsrc,		/* (input) */
	const char *initv,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const complex_float *h,		/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	complex_float *w,		/* w[n] (input/output) */
	complex_float *vl,		/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	complex_float *vr,		/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_float *work,		/* work[n*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *ifaill,			/* ifaill[mm] (output) */
	int *ifailr,			/* ifailr[mm] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

