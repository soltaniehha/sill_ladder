#ifdef __cplusplus
extern "C" void dlacon_(
	const int &n,			// (input)
	double *v,			// v[n] (workspace)
	double *x,			// x[n] (input/output)
	int *isgn,			// isgn[n] (workspace)
	double &est,			// (output)
	int &kase			// (input/output)
	);
#else /* ! __cplusplus */
void dlacon_(
	const int *n,			/* (input) */
	double *v,			/* v[n] (workspace) */
	double *x,			/* x[n] (input/output) */
	int *isgn,			/* isgn[n] (workspace) */
	double *est,			/* (output) */
	int *kase			/* (input/output) */
	);
#endif /* ! __cplusplus */

