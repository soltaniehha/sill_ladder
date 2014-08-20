#ifdef __cplusplus
extern "C" void ztrsna_(
	const char &job,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const complex<double> *t,	// t[n][ldt] (input)
	const int &ldt,			// (input)
	const complex<double> *vl,	// vl[m][ldvl] (input)
	const int &ldvl,		// (input)
	const complex<double> *vr,	// vr[m][ldvr] (input)
	const int &ldvr,		// (input)
	double *s,			// s[mm] (output)
	double *sep,			// sep[mm] (output)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<double> *work,		// work[n+1][ldwork] (workspace)
	const int &ldwork,		// (input)
	double *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztrsna_(
	const char *job,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const complex_double *t,	/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	const complex_double *vl,	/* vl[m][ldvl] (input) */
	const int *ldvl,		/* (input) */
	const complex_double *vr,	/* vr[m][ldvr] (input) */
	const int *ldvr,		/* (input) */
	double *s,			/* s[mm] (output) */
	double *sep,			/* sep[mm] (output) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_double *work,		/* work[n+1][ldwork] (workspace) */
	const int *ldwork,		/* (input) */
	double *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

