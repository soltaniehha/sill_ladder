#ifdef __cplusplus
extern "C" void slasq1_(
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n] (input/output)
	float *work,			// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slasq1_(
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n] (input/output) */
	float *work,			/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

