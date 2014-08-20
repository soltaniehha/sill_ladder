#ifdef __cplusplus
extern "C" void dlaed2_(
	int &k,				// (output)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int *indxq,			// indxq[n] (input/output)
	double &rho,			// (input/output)
	const int &cutpnt,		// (input)
	const double *z,		// z[n] (input)
	double *dlamda,			// dlamda[n] (output)
	double *q2,			// q2[n][ldq2] (output)
	const int &ldq2,		// (input)
	int *indxc,			// indxc[n] (output)
	double *w,			// w[n] (output)
	int *indxp,			// indxp[n] (workspace)
	int *indx,			// indx[n] (workspace)
	int *coltyp,			// coltyp[n] (workspace/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed2_(
	int *k,				/* (output) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *indxq,			/* indxq[n] (input/output) */
	double *rho,			/* (input/output) */
	const int *cutpnt,		/* (input) */
	const double *z,		/* z[n] (input) */
	double *dlamda,			/* dlamda[n] (output) */
	double *q2,			/* q2[n][ldq2] (output) */
	const int *ldq2,		/* (input) */
	int *indxc,			/* indxc[n] (output) */
	double *w,			/* w[n] (output) */
	int *indxp,			/* indxp[n] (workspace) */
	int *indx,			/* indx[n] (workspace) */
	int *coltyp,			/* coltyp[n] (workspace/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

