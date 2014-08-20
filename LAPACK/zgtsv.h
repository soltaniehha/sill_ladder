#ifdef __cplusplus
extern "C" void zgtsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<double> *dl,		// dl[n-1] (input/output)
	complex<double> *d,		// d[n] (input/output)
	complex<double> *du,		// du[n-1] (input/output)
	complex<double> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgtsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_double *dl,		/* dl[n-1] (input/output) */
	complex_double *d,		/* d[n] (input/output) */
	complex_double *du,		/* du[n-1] (input/output) */
	complex_double *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

