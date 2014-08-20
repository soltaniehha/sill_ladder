#ifdef __cplusplus
extern "C" void dtrsen_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	double *t,			// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *wr,			// wr[n] (output)
	double *wi,			// wi[n] (output)
	int &m,				// (output)
	double &s,			// (output)
	double &sep,			// (output)
	double *work,			// work[lwork] (workspace)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtrsen_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	double *t,			/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *wr,			/* wr[n] (output) */
	double *wi,			/* wi[n] (output) */
	int *m,				/* (output) */
	double *s,			/* (output) */
	double *sep,			/* (output) */
	double *work,			/* work[lwork] (workspace) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

