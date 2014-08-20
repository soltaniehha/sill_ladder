#ifdef __cplusplus
extern "C" void zlaed8_(
	int &k,				// (output)
	const int &n,			// (input)
	const int &qsiz,		// (input)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *d,			// d[n] (input/output)
	double &rho,			// (input/output)
	const int &cutpnt,		// (input)
	const double *z,		// z[n] (input)
	double *dlamda,			// dlamda[n] (output)
	complex<double> *q2,		// q2[n][ldq2] (output)
	const int &ldq2,		// (input)
	double *w,			// w[n] (output)
	int *indxp,			// indxp[n] (workspace)
	int *indx,			// indx[n] (workspace)
	const int *indxq,		// indxq[n] (input)
	int *perm,			// perm[n] (output)
	int &givptr,			// (output)
	int *givcol,			// givcol[n][2] (output)
	double *givnum,			// givnum[n][2] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlaed8_(
	int *k,				/* (output) */
	const int *n,			/* (input) */
	const int *qsiz,		/* (input) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *rho,			/* (input/output) */
	const int *cutpnt,		/* (input) */
	const double *z,		/* z[n] (input) */
	double *dlamda,			/* dlamda[n] (output) */
	complex_double *q2,		/* q2[n][ldq2] (output) */
	const int *ldq2,		/* (input) */
	double *w,			/* w[n] (output) */
	int *indxp,			/* indxp[n] (workspace) */
	int *indx,			/* indx[n] (workspace) */
	const int *indxq,		/* indxq[n] (input) */
	int *perm,			/* perm[n] (output) */
	int *givptr,			/* (output) */
	int *givcol,			/* givcol[n][2] (output) */
	double *givnum,			/* givnum[n][2] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

