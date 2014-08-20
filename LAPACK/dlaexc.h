#ifdef __cplusplus
extern "C" void dlaexc_(
	const int &wantq,		// (input)
	const int &n,			// (input)
	double *t,			// t[n][ldt] (input/output)
	const int &ldt,			// (input)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const int &j1,			// (input)
	const int &n1,			// (input)
	const int &n2,			// (input)
	double *work,			// work[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaexc_(
	const int *wantq,		/* (input) */
	const int *n,			/* (input) */
	double *t,			/* t[n][ldt] (input/output) */
	const int *ldt,			/* (input) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const int *j1,			/* (input) */
	const int *n1,			/* (input) */
	const int *n2,			/* (input) */
	double *work,			/* work[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

