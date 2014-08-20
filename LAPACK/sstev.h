#ifdef __cplusplus
extern "C" void sstev_(
	const char &jobz,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n] (input/output)
	float *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[max(1,2*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sstev_(
	const char *jobz,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n] (input/output) */
	float *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[max(1,2*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

