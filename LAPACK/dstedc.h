#ifdef __cplusplus
extern "C" void dstedc_(
	const char &compz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	double *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	double *work,			// work[?] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace/output)
	const int &liwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dstedc_(
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	double *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[?] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace/output) */
	const int *liwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

