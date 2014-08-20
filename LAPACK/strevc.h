#ifdef __cplusplus
extern "C" void strevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	int *select,			// select[n] (input/output)
	const int &n,			// (input)
	const float *t,			// t[n][ldt] (input)
	const int &ldt,			// (input)
	float *vl,			// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	float *vr,			// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	float *work,			// work[3*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void strevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	int *select,			/* select[n] (input/output) */
	const int *n,			/* (input) */
	const float *t,			/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	float *vl,			/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	float *vr,			/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	float *work,			/* work[3*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

