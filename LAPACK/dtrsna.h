#ifdef __cplusplus
extern "C" void dtrsna_(
	const char &job,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const double *t,		// t[n][ldt] (input)
	const int &ldt,			// (input)
	const double *vl,		// vl[m][ldvl] (input)
	const int &ldvl,		// (input)
	const double *vr,		// vr[m][ldvr] (input)
	const int &ldvr,		// (input)
	double *s,			// s[mm] (output)
	double *sep,			// sep[mm] (output)
	const int &mm,			// (input)
	int &m,				// (output)
	double *work,			// work[n+1][ldwork] (workspace)
	const int &ldwork,		// (input)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtrsna_(
	const char *job,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const double *t,		/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	const double *vl,		/* vl[m][ldvl] (input) */
	const int *ldvl,		/* (input) */
	const double *vr,		/* vr[m][ldvr] (input) */
	const int *ldvr,		/* (input) */
	double *s,			/* s[mm] (output) */
	double *sep,			/* sep[mm] (output) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	double *work,			/* work[n+1][ldwork] (workspace) */
	const int *ldwork,		/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

