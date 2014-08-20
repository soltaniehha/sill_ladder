#ifdef __cplusplus
extern "C" void dlaed8_(
	const int &icompq,		// (input)
	int &k,				// (output)
	const int &n,			// (input)
	const int &qsiz,		// (input)
	double *d,			// d[n] (input/output)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const int *indxq,		// indxq[n] (input)
	double &rho,			// (input/output)
	const int &cutpnt,		// (input)
	const double *z,		// z[n] (input)
	double *dlamda,			// dlamda[n] (output)
	double *q2,			// q2[n][ldq2] (output)
	const int &ldq2,		// (input)
	double *w,			// w[n] (output)
	int *perm,			// perm[n] (output)
	int &givptr,			// (output)
	int *givcol,			// givcol[n][2] (output)
	double *givnum,			// givnum[n][2] (output)
	int *indxp,			// indxp[n] (workspace)
	int *indx,			// indx[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed8_(
	const int *icompq,		/* (input) */
	int *k,				/* (output) */
	const int *n,			/* (input) */
	const int *qsiz,		/* (input) */
	double *d,			/* d[n] (input/output) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const int *indxq,		/* indxq[n] (input) */
	double *rho,			/* (input/output) */
	const int *cutpnt,		/* (input) */
	const double *z,		/* z[n] (input) */
	double *dlamda,			/* dlamda[n] (output) */
	double *q2,			/* q2[n][ldq2] (output) */
	const int *ldq2,		/* (input) */
	double *w,			/* w[n] (output) */
	int *perm,			/* perm[n] (output) */
	int *givptr,			/* (output) */
	int *givcol,			/* givcol[n][2] (output) */
	double *givnum,			/* givnum[n][2] (output) */
	int *indxp,			/* indxp[n] (workspace) */
	int *indx,			/* indx[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

