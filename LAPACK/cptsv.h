#ifdef __cplusplus
extern "C" void cptsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *d,			// d[n] (input/output)
	complex<float> *e,		// e[n-1] (input/output)
	complex<float> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cptsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *d,			/* d[n] (input/output) */
	complex_float *e,		/* e[n-1] (input/output) */
	complex_float *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

