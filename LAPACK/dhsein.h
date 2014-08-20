#ifdef __cplusplus
extern "C" void dhsein_(
	const char &side,		// (input)
	const char &eigsrc,		// (input)
	const char &initv,		// (input)
	int *select,			// select[n] (input/output)
	const int &n,			// (input)
	const double *h,		// h[n][ldh] (input)
	const int &ldh,			// (input)
	double *wr,			// wr[n] (input/output)
	const double *wi,		// wi[n] (input)
	double *vl,			// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	double *vr,			// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	double *work,			// work[(n+2)*n] (workspace)
	int *ifaill,			// ifaill[mm] (output)
	int *ifailr,			// ifailr[mm] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dhsein_(
	const char *side,		/* (input) */
	const char *eigsrc,		/* (input) */
	const char *initv,		/* (input) */
	int *select,			/* select[n] (input/output) */
	const int *n,			/* (input) */
	const double *h,		/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	double *wr,			/* wr[n] (input/output) */
	const double *wi,		/* wi[n] (input) */
	double *vl,			/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	double *vr,			/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	double *work,			/* work[(n+2)*n] (workspace) */
	int *ifaill,			/* ifaill[mm] (output) */
	int *ifailr,			/* ifailr[mm] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

