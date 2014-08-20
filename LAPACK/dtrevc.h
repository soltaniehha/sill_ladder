#ifdef __cplusplus
extern "C" void dtrevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	int *select,			// select[n] (input/output)
	const int &n,			// (input)
	const double *t,		// t[n][ldt] (input)
	const int &ldt,			// (input)
	double *vl,			// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	double *vr,			// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	double *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtrevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	int *select,			/* select[n] (input/output) */
	const int *n,			/* (input) */
	const double *t,		/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	double *vl,			/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	double *vr,			/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	double *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

