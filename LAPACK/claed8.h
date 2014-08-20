#ifdef __cplusplus
extern "C" void claed8_(
	int &k,				// (output)
	const int &n,			// (input)
	const int &qsiz,		// (input)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	float *d,			// d[n] (input/output)
	float &rho,			// (input/output)
	const int &cutpnt,		// (input)
	const float *z,			// z[n] (input)
	float *dlamda,			// dlamda[n] (output)
	complex<float> *q2,		// q2[n][ldq2] (output)
	const int &ldq2,		// (input)
	float *w,			// w[n] (output)
	int *indxp,			// indxp[n] (workspace)
	int *indx,			// indx[n] (workspace)
	const int *indxq,		// indxq[n] (input)
	int *perm,			// perm[n] (output)
	int &givptr,			// (output)
	int *givcol,			// givcol[n][2] (output)
	float *givnum,			// givnum[n][2] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void claed8_(
	int *k,				/* (output) */
	const int *n,			/* (input) */
	const int *qsiz,		/* (input) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *rho,			/* (input/output) */
	const int *cutpnt,		/* (input) */
	const float *z,			/* z[n] (input) */
	float *dlamda,			/* dlamda[n] (output) */
	complex_float *q2,		/* q2[n][ldq2] (output) */
	const int *ldq2,		/* (input) */
	float *w,			/* w[n] (output) */
	int *indxp,			/* indxp[n] (workspace) */
	int *indx,			/* indx[n] (workspace) */
	const int *indxq,		/* indxq[n] (input) */
	int *perm,			/* perm[n] (output) */
	int *givptr,			/* (output) */
	int *givcol,			/* givcol[n][2] (output) */
	float *givnum,			/* givnum[n][2] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

