#ifdef __cplusplus
extern "C" void ztrevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	complex<double> *t,		// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	complex<double> *vl,		// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	complex<double> *vr,		// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztrevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	complex_double *t,		/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	complex_double *vl,		/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	complex_double *vr,		/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

