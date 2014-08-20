#ifdef __cplusplus
extern "C" void slaexc_(
	const int &wantq,		// (input)
	const int &n,			// (input)
	float *t,			// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const int &j1,			// (input)
	const int &n1,			// (input)
	const int &n2,			// (input)
	float *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaexc_(
	const int *wantq,		/* (input) */
	const int *n,			/* (input) */
	float *t,			/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const int *j1,			/* (input) */
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	float *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

