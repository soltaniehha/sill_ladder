#ifdef __cplusplus
extern "C" void zlaed7_(
	const int &n,			// (input)
	const int &cutpnt,		// (input)
	const int &qsiz,		// (input)
	const int &tlvls,		// (input)
	const int &curlvl,		// (input)
	const int &curpbm,		// (input)
	double *d,			// d[n] (input/output)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const double &rho,		// (input)
	int *indxq,			// indxq[n] (output)
	double *qstore,			// qstore[n**2+1] (input/output)
	int *qptr,			// qptr[n+2] (input/output)
	const int *prmptr,		// prmptr[n lg n] (input)
	const int *perm,		// perm[n lg n] (input)
	const int *givptr,		// givptr[n lg n] (input)
	const int *givcol,		// givcol[n lg n][2] (input)
	const double *givnum,		// givnum[n lg n][2] (input)
	complex<double> *work,		// work[qsiz*n] (workspace)
	double *rwork,			// rwork[?] (workspace)
	int *iwork,			// iwork[4*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlaed7_(
	const int *n,			/* (input) */
	const int *cutpnt,		/* (input) */
	const int *qsiz,		/* (input) */
	const int *tlvls,		/* (input) */
	const int *curlvl,		/* (input) */
	const int *curpbm,		/* (input) */
	double *d,			/* d[n] (input/output) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const double *rho,		/* (input) */
	int *indxq,			/* indxq[n] (output) */
	double *qstore,			/* qstore[n**2+1] (input/output) */
	int *qptr,			/* qptr[n+2] (input/output) */
	const int *prmptr,		/* prmptr[n lg n] (input) */
	const int *perm,		/* perm[n lg n] (input) */
	const int *givptr,		/* givptr[n lg n] (input) */
	const int *givcol,		/* givcol[n lg n][2] (input) */
	const double *givnum,		/* givnum[n lg n][2] (input) */
	complex_double *work,		/* work[qsiz*n] (workspace) */
	double *rwork,			/* rwork[?] (workspace) */
	int *iwork,			/* iwork[4*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

