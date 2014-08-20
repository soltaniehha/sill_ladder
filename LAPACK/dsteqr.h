#ifdef __cplusplus
extern "C" void dsteqr_(
	const char &compz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	double *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	double *work,			// work[max(1,2*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dsteqr_(
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	double *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[max(1,2*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

