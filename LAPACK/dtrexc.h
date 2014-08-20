#ifdef __cplusplus
extern "C" void dtrexc_(
	const char &compq,		// (input)
	const int &n,			// (input)
	double *t,			// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int &ifst,			// (input/output)
	int &ilst,			// (input/output)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtrexc_(
	const char *compq,		/* (input) */
	const int *n,			/* (input) */
	double *t,			/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *ifst,			/* (input/output) */
	int *ilst,			/* (input/output) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

