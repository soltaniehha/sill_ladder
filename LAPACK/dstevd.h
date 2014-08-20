#ifdef __cplusplus
extern "C" void dstevd_(
	const char &jobz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n] (input/output)
	double *z,			// z[n][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[?] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dstevd_(
	const char *jobz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	double *z,			/* z[n][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[?] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

