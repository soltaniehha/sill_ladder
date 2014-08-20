#ifdef __cplusplus
extern "C" void strexc_(
	const char &compq,		// (input)
	const int &n,			// (input)
	float *t,			// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int &ifst,			// (input/output)
	int &ilst,			// (input/output)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void strexc_(
	const char *compq,		/* (input) */
	const int *n,			/* (input) */
	float *t,			/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *ifst,			/* (input/output) */
	int *ilst,			/* (input/output) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

