#ifdef __cplusplus
extern "C" void sstevd_(
	const char &jobz,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n] (input/output)
	float *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[?] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sstevd_(
	const char *jobz,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n] (input/output) */
	float *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[?] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

