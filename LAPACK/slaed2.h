#ifdef __cplusplus
extern "C" void slaed2_(
	int &k,				// (output)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int *indxq,			// indxq[n] (input/output)
	float &rho,			// (input/output)
	const int &cutpnt,		// (input)
	const float *z,			// z[n] (input)
	float *dlamda,			// dlamda[n] (output)
	float *q2,			// q2[n][ldq2] (output)
	const int &ldq2,		// (input)
	int *indxc,			// indxc[n] (output)
	float *w,			// w[n] (output)
	int *indxp,			// indxp[n] (workspace)
	int *indx,			// indx[n] (workspace)
	int *coltyp,			// coltyp[n] (workspace/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed2_(
	int *k,				/* (output) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *indxq,			/* indxq[n] (input/output) */
	float *rho,			/* (input/output) */
	const int *cutpnt,		/* (input) */
	const float *z,			/* z[n] (input) */
	float *dlamda,			/* dlamda[n] (output) */
	float *q2,			/* q2[n][ldq2] (output) */
	const int *ldq2,		/* (input) */
	int *indxc,			/* indxc[n] (output) */
	float *w,			/* w[n] (output) */
	int *indxp,			/* indxp[n] (workspace) */
	int *indx,			/* indx[n] (workspace) */
	int *coltyp,			/* coltyp[n] (workspace/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

