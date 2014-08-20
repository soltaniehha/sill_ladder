#ifdef __cplusplus
extern "C" void slaed8_(
	const int &icompq,		// (input)
	int &k,				// (output)
	const int &n,			// (input)
	const int &qsiz,		// (input)
	float *d,			// d[n] (input/output)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const int *indxq,		// indxq[n] (input)
	float &rho,			// (input/output)
	const int &cutpnt,		// (input)
	const float *z,			// z[n] (input)
	float *dlamda,			// dlamda[n] (output)
	float *q2,			// q2[n][ldq2] (output)
	const int &ldq2,		// (input)
	float *w,			// w[n] (output)
	int *perm,			// perm[n] (output)
	int &givptr,			// (output)
	int *givcol,			// givcol[n][2] (output)
	float *givnum,			// givnum[n][2] (output)
	int *indxp,			// indxp[n] (workspace)
	int *indx,			// indx[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed8_(
	const int *icompq,		/* (input) */
	int *k,				/* (output) */
	const int *n,			/* (input) */
	const int *qsiz,		/* (input) */
	float *d,			/* d[n] (input/output) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const int *indxq,		/* indxq[n] (input) */
	float *rho,			/* (input/output) */
	const int *cutpnt,		/* (input) */
	const float *z,			/* z[n] (input) */
	float *dlamda,			/* dlamda[n] (output) */
	float *q2,			/* q2[n][ldq2] (output) */
	const int *ldq2,		/* (input) */
	float *w,			/* w[n] (output) */
	int *perm,			/* perm[n] (output) */
	int *givptr,			/* (output) */
	int *givcol,			/* givcol[n][2] (output) */
	float *givnum,			/* givnum[n][2] (output) */
	int *indxp,			/* indxp[n] (workspace) */
	int *indx,			/* indx[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

