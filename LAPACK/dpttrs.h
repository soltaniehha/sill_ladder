#ifdef __cplusplus
extern "C" void dpttrs_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n-1] (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dpttrs_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n-1] (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

