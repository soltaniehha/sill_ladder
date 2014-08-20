#ifdef __cplusplus
extern "C" void slaed1_(
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	int *indxq,			// indxq[n] (input/output)
	const float &rho,		// (input)
	const int &cutpnt,		// (input)
	float *work,			// work[3*n+2*n**2] (workspace)
	int *iwork,			// iwork[4*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed1_(
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	int *indxq,			/* indxq[n] (input/output) */
	const float *rho,		/* (input) */
	const int *cutpnt,		/* (input) */
	float *work,			/* work[3*n+2*n**2] (workspace) */
	int *iwork,			/* iwork[4*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

