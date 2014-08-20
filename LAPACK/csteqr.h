#ifdef __cplusplus
extern "C" void csteqr_(
	const char &compz,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n-1] (input/output)
	complex<float> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	float *work,			// work[max(1,2*n-2)] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void csteqr_(
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n-1] (input/output) */
	complex_float *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[max(1,2*n-2)] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

