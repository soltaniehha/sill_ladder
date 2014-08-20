#ifdef __cplusplus
extern "C" void slaed9_(
	const int &k,			// (input)
	const int &kstart,		// (input)
	const int &kstop,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (output)
	float *q,			// q[n][ldq] (workspace)
	const int &ldq,			// (input)
	const float &rho,		// (input)
	const float *dlamda,		// dlamda[k] (input)
	const float *w,			// w[k] (input)
	float *s,			// s[k][lds] (output)
	const int &lds,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed9_(
	const int *k,			/* (input) */
	const int *kstart,		/* (input) */
	const int *kstop,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (output) */
	float *q,			/* q[n][ldq] (workspace) */
	const int *ldq,			/* (input) */
	const float *rho,		/* (input) */
	const float *dlamda,		/* dlamda[k] (input) */
	const float *w,			/* w[k] (input) */
	float *s,			/* s[k][lds] (output) */
	const int *lds,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

