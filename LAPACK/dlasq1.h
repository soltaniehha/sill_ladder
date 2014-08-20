#ifdef __cplusplus
extern "C" void dlasq1_(
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n] (input/output)
	double *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlasq1_(
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	double *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

