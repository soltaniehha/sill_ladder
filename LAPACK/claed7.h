#ifdef __cplusplus
extern "C" void claed7_(
	const int &n,			// (input)
	const int &cutpnt,		// (input)
	const int &qsiz,		// (input)
	const int &tlvls,		// (input)
	const int &curlvl,		// (input)
	const int &curpbm,		// (input)
	float *d,			// d[n] (input/output)
	complex<float> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	const float &rho,		// (input)
	int *indxq,			// indxq[n] (output)
	float *qstore,			// qstore[n**2+1] (input/output)
	int *qptr,			// qptr[n+2] (input/output)
	const int *prmptr,		// prmptr[n lg n] (input)
	const int *perm,		// perm[n lg n] (input)
	const int *givptr,		// givptr[n lg n] (input)
	const int *givcol,		// givcol[n lg n][2] (input)
	const float *givnum,		// givnum[n lg n][2] (input)
	complex<float> *work,		// work[qsiz*n] (workspace)
	float *rwork,			// rwork[?] (workspace)
	int *iwork,			// iwork[4*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void claed7_(
	const int *n,			/* (input) */
	const int *cutpnt,		/* (input) */
	const int *qsiz,		/* (input) */
	const int *tlvls,		/* (input) */
	const int *curlvl,		/* (input) */
	const int *curpbm,		/* (input) */
	float *d,			/* d[n] (input/output) */
	complex_float *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	const float *rho,		/* (input) */
	int *indxq,			/* indxq[n] (output) */
	float *qstore,			/* qstore[n**2+1] (input/output) */
	int *qptr,			/* qptr[n+2] (input/output) */
	const int *prmptr,		/* prmptr[n lg n] (input) */
	const int *perm,		/* perm[n lg n] (input) */
	const int *givptr,		/* givptr[n lg n] (input) */
	const int *givcol,		/* givcol[n lg n][2] (input) */
	const float *givnum,		/* givnum[n lg n][2] (input) */
	complex_float *work,		/* work[qsiz*n] (workspace) */
	float *rwork,			/* rwork[?] (workspace) */
	int *iwork,			/* iwork[4*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

