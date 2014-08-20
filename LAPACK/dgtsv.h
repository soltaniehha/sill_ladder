#ifdef __cplusplus
extern "C" void dgtsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *dl,			// dl[n-1] (input/output)
	double *d,			// d[n] (input/output)
	double *du,			// du[n-1] (input/output)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgtsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *dl,			/* dl[n-1] (input/output) */
	double *d,			/* d[n] (input/output) */
	double *du,			/* du[n-1] (input/output) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

