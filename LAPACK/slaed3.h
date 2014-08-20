#ifdef __cplusplus
extern "C" void slaed3_(
	const int &k,			// (input)
	const int &kstart,		// (input)
	const int &kstop,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (output)
	float *q,			// q[n][ldq] (output)
	const int &ldq,			// (input)
	const float &rho,		// (input)
	const int &cutpnt,		// (input)
	float *dlamda,			// dlamda[k] (input/output)
	const float *q2,		// q2[n][ldq2] (input)
	const int &ldq2,		// (input)
	const int *indxc,		// indxc[n] (input)
	const int *ctot,		// ctot[4] (input)
	float *w,			// w[k] (input/output)
	float *s,			// s[k][lds] (workspace)
	const int &lds,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed3_(
	const int *k,			/* (input) */
	const int *kstart,		/* (input) */
	const int *kstop,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (output) */
	float *q,			/* q[n][ldq] (output) */
	const int *ldq,			/* (input) */
	const float *rho,		/* (input) */
	const int *cutpnt,		/* (input) */
	float *dlamda,			/* dlamda[k] (input/output) */
	const float *q2,		/* q2[n][ldq2] (input) */
	const int *ldq2,		/* (input) */
	const int *indxc,		/* indxc[n] (input) */
	const int *ctot,		/* ctot[4] (input) */
	float *w,			/* w[k] (input/output) */
	float *s,			/* s[k][lds] (workspace) */
	const int *lds,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

