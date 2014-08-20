#ifdef __cplusplus
extern "C" void sgtsv_(
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *dl,			// dl[n-1] (input/output)
	float *d,			// d[n] (input/output)
	float *du,			// du[n-1] (input/output)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgtsv_(
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *dl,			/* dl[n-1] (input/output) */
	float *d,			/* d[n] (input/output) */
	float *du,			/* du[n-1] (input/output) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

