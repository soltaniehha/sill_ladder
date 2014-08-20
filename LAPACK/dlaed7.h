#ifdef __cplusplus
extern "C" void dlaed7_(
	const int &icompq,		// (input)
	const int &n,			// (input)
	const int &qsiz,		// (input)
	const int &tlvls,		// (input)
	const int &curlvl,		// (input)
	const int &curpbm,		// (input)
	double *d,			// d[n] (input/output)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int *indxq,			// indxq[n] (output)
	const double &rho,		// (input)
	const int &cutpnt,		// (input)
	double *qstore,			// qstore[n**2+1] (input/output)
	int *qptr,			// qptr[n+2] (input/output)
	const int *prmptr,		// prmptr[n lg n] (input)
	const int *perm,		// perm[n lg n] (input)
	const int *givptr,		// givptr[n lg n] (input)
	const int *givcol,		// givcol[n lg n][2] (input)
	const double *givnum,		// givnum[n lg n][2] (input)
	double *work,			// work[3*n+qsiz*n] (workspace)
	int *iwork,			// iwork[4*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed7_(
	const int *icompq,		/* (input) */
	const int *n,			/* (input) */
	const int *qsiz,		/* (input) */
	const int *tlvls,		/* (input) */
	const int *curlvl,		/* (input) */
	const int *curpbm,		/* (input) */
	double *d,			/* d[n] (input/output) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *indxq,			/* indxq[n] (output) */
	const double *rho,		/* (input) */
	const int *cutpnt,		/* (input) */
	double *qstore,			/* qstore[n**2+1] (input/output) */
	int *qptr,			/* qptr[n+2] (input/output) */
	const int *prmptr,		/* prmptr[n lg n] (input) */
	const int *perm,		/* perm[n lg n] (input) */
	const int *givptr,		/* givptr[n lg n] (input) */
	const int *givcol,		/* givcol[n lg n][2] (input) */
	const double *givnum,		/* givnum[n lg n][2] (input) */
	double *work,			/* work[3*n+qsiz*n] (workspace) */
	int *iwork,			/* iwork[4*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

