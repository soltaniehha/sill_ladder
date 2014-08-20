#ifdef __cplusplus
extern "C" void ctrevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	complex<float> *t,		// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	complex<float> *vl,		// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	complex<float> *vr,		// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	complex_float *t,		/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	complex_float *vl,		/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	complex_float *vr,		/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

