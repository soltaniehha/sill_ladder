#ifdef __cplusplus
extern "C" void dlaed1_(
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int *indxq,			// indxq[n] (input/output)
	const double &rho,		// (input)
	const int &cutpnt,		// (input)
	double *work,			// work[3*n+2*n**2] (workspace)
	int *iwork,			// iwork[4*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed1_(
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *indxq,			/* indxq[n] (input/output) */
	const double *rho,		/* (input) */
	const int *cutpnt,		/* (input) */
	double *work,			/* work[3*n+2*n**2] (workspace) */
	int *iwork,			/* iwork[4*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

