#ifdef __cplusplus
extern "C" void slacon_(
	const int &n,			// (input)
	float *v,			// v[n] (workspace)
	float *x,			// x[n] (input/output)
	int *isgn,			// isgn[n] (workspace)
	float &est,			// (output)
	int &kase			// (input/output)
	);
#else /* ! __cplusplus */
void slacon_(
	const int *n,			/* (input) */
	float *v,			/* v[n] (workspace) */
	float *x,			/* x[n] (input/output) */
	int *isgn,			/* isgn[n] (workspace) */
	float *est,			/* (output) */
	int *kase			/* (input/output) */
	);
#endif /* ! __cplusplus */

