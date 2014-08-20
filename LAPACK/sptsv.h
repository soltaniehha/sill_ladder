#ifdef __cplusplus
extern "C" void sptsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n-1] (input/output)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sptsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n-1] (input/output) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

