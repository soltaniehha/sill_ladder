#ifdef __cplusplus
extern "C" void cgtsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<float> *dl,		// dl[n-1] (input/output)
	complex<float> *d,		// d[n] (input/output)
	complex<float> *du,		// du[n-1] (input/output)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgtsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *dl,		/* dl[n-1] (input/output) */
	complex_float *d,		/* d[n] (input/output) */
	complex_float *du,		/* du[n-1] (input/output) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

