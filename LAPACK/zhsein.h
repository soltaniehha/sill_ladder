#ifdef __cplusplus
extern "C" void zhsein_(
	const char &side,		// (input)
	const char &eigsrc,		// (input)
	const char &initv,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const complex<double> *h,	// h[n][ldh] (input)
	const int &ldh,			// (input)
	complex<double> *w,		// w[n] (input/output)
	complex<double> *vl,		// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	complex<double> *vr,		// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<double> *work,		// work[n*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int *ifaill,			// ifaill[mm] (output)
	int *ifailr,			// ifailr[mm] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zhsein_(
	const char *side,		/* (input) */
	const char *eigsrc,		/* (input) */
	const char *initv,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const complex_double *h,	/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	complex_double *w,		/* w[n] (input/output) */
	complex_double *vl,		/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	complex_double *vr,		/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_double *work,		/* work[n*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *ifaill,			/* ifaill[mm] (output) */
	int *ifailr,			/* ifailr[mm] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

