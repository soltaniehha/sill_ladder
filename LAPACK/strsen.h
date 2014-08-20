#ifdef __cplusplus
extern "C" void strsen_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	float *t,			// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	int &m,				// (output)
	float &s,			// (output)
	float &sep,			// (output)
	float *work,			// work[lwork] (workspace)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void strsen_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	float *t,			/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	int *m,				/* (output) */
	float *s,			/* (output) */
	float *sep,			/* (output) */
	float *work,			/* work[lwork] (workspace) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

