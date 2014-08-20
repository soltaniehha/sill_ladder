#ifdef __cplusplus
extern "C" void dptsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dptsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

