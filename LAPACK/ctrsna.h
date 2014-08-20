#ifdef __cplusplus
extern "C" void ctrsna_(
	const char &job,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const complex<float> *t,	// t[n][ldt] (input)
	const int &ldt,			// (input)
	const complex<float> *vl,	// vl[m][ldvl] (input)
	const int &ldvl,		// (input)
	const complex<float> *vr,	// vr[m][ldvr] (input)
	const int &ldvr,		// (input)
	float *s,			// s[mm] (output)
	float *sep,			// sep[mm] (output)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<float> *work,		// work[n+1][ldwork] (workspace)
	const int &ldwork,		// (input)
	float *rwork,			// rwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrsna_(
	const char *job,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const complex_float *t,		/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	const complex_float *vl,	/* vl[m][ldvl] (input) */
	const int *ldvl,		/* (input) */
	const complex_float *vr,	/* vr[m][ldvr] (input) */
	const int *ldvr,		/* (input) */
	float *s,			/* s[mm] (output) */
	float *sep,			/* sep[mm] (output) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_float *work,		/* work[n+1][ldwork] (workspace) */
	const int *ldwork,		/* (input) */
	float *rwork,			/* rwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

