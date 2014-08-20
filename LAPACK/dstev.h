#ifdef __cplusplus
extern "C" void dstev_(
	const char &jobz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n] (input/output)
	double *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[max(1,2*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dstev_(
	const char *jobz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	double *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[max(1,2*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

