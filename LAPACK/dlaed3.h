#ifdef __cplusplus
extern "C" void dlaed3_(
	const int &k,			// (input)
	const int &kstart,		// (input)
	const int &kstop,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (output)
	double *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	const double &rho,		// (input)
	const int &cutpnt,		// (input)
	double *dlamda,			// dlamda[k] (input/output)
	const double *q2,		// q2[n][ldq2] (input)
	const int &ldq2,		// (input)
	const int *indxc,		// indxc[n] (input)
	const int *ctot,		// ctot[4] (input)
	double *w,			// w[k] (input/output)
	double *s,			// s[k][lds] (workspace)
	const int &lds,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed3_(
	const int *k,			/* (input) */
	const int *kstart,		/* (input) */
	const int *kstop,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (output) */
	double *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	const double *rho,		/* (input) */
	const int *cutpnt,		/* (input) */
	double *dlamda,			/* dlamda[k] (input/output) */
	const double *q2,		/* q2[n][ldq2] (input) */
	const int *ldq2,		/* (input) */
	const int *indxc,		/* indxc[n] (input) */
	const int *ctot,		/* ctot[4] (input) */
	double *w,			/* w[k] (input/output) */
	double *s,			/* s[k][lds] (workspace) */
	const int *lds,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

