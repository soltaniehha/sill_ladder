#ifdef __cplusplus
extern "C" void zptsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *d,			// d[n] (input/output)
	complex<double> *e,		// e[n-1] (input/output)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zptsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *d,			/* d[n] (input/output) */
	complex_double *e,		/* e[n-1] (input/output) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

