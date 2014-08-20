#ifdef __cplusplus
extern "C" void strsna_(
	const char &job,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const float *t,			// t[n][ldt] (input)
	const int &ldt,			// (input)
	const float *vl,		// vl[m][ldvl] (input)
	const int &ldvl,		// (input)
	const float *vr,		// vr[m][ldvr] (input)
	const int &ldvr,		// (input)
	float *s,			// s[mm] (output)
	float *sep,			// sep[mm] (output)
	const int &mm,			// (input)
	int &m,				// (output)
	float *work,			// work[n+1][ldwork] (workspace)
	const int &ldwork,		// (input)
	int *iwork,			// iwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void strsna_(
	const char *job,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const float *t,			/* t[n][ldt] (input) */
	const int *ldt,			/* (input) */
	const float *vl,		/* vl[m][ldvl] (input) */
	const int *ldvl,		/* (input) */
	const float *vr,		/* vr[m][ldvr] (input) */
	const int *ldvr,		/* (input) */
	float *s,			/* s[mm] (output) */
	float *sep,			/* sep[mm] (output) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	float *work,			/* work[n+1][ldwork] (workspace) */
	const int *ldwork,		/* (input) */
	int *iwork,			/* iwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

