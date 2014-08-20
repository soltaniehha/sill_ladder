#ifdef __cplusplus
extern "C" void slaed7_(
	const int &icompq,		// (input)
	const int &n,			// (input)
	const int &qsiz,		// (input)
	const int &tlvls,		// (input)
	const int &curlvl,		// (input)
	const int &curpbm,		// (input)
	float *d,			// d[n] (input/output)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int *indxq,			// indxq[n] (output)
	const float &rho,		// (input)
	const int &cutpnt,		// (input)
	float *qstore,			// qstore[n**2+1] (input/output)
	int *qptr,			// qptr[n+2] (input/output)
	const int *prmptr,		// prmptr[n lg n] (input)
	const int *perm,		// perm[n lg n] (input)
	const int *givptr,		// givptr[n lg n] (input)
	const int *givcol,		// givcol[n lg n][2] (input)
	const float *givnum,		// givnum[n lg n][2] (input)
	float *work,			// work[3*n+qsiz*n] (workspace)
	int *iwork,			// iwork[4*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed7_(
	const int *icompq,		/* (input) */
	const int *n,			/* (input) */
	const int *qsiz,		/* (input) */
	const int *tlvls,		/* (input) */
	const int *curlvl,		/* (input) */
	const int *curpbm,		/* (input) */
	float *d,			/* d[n] (input/output) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *indxq,			/* indxq[n] (output) */
	const float *rho,		/* (input) */
	const int *cutpnt,		/* (input) */
	float *qstore,			/* qstore[n**2+1] (input/output) */
	int *qptr,			/* qptr[n+2] (input/output) */
	const int *prmptr,		/* prmptr[n lg n] (input) */
	const int *perm,		/* perm[n lg n] (input) */
	const int *givptr,		/* givptr[n lg n] (input) */
	const int *givcol,		/* givcol[n lg n][2] (input) */
	const float *givnum,		/* givnum[n lg n][2] (input) */
	float *work,			/* work[3*n+qsiz*n] (workspace) */
	int *iwork,			/* iwork[4*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

