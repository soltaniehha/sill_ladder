#ifdef __cplusplus
extern "C" void dlaed9_(
	const int &k,			// (input)
	const int &kstart,		// (input)
	const int &kstop,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (output)
	double *q,			// q[n][ldq] (workspace)
	const int &ldq,			// (input)
	const double &rho,		// (input)
	const double *dlamda,		// dlamda[k] (input)
	const double *w,		// w[k] (input)
	double *s,			// s[k][lds] (output)
	const int &lds,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed9_(
	const int *k,			/* (input) */
	const int *kstart,		/* (input) */
	const int *kstop,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (output) */
	double *q,			/* q[n][ldq] (workspace) */
	const int *ldq,			/* (input) */
	const double *rho,		/* (input) */
	const double *dlamda,		/* dlamda[k] (input) */
	const double *w,		/* w[k] (input) */
	double *s,			/* s[k][lds] (output) */
	const int *lds,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

