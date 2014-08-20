#ifdef __cplusplus
extern "C" void spteqr_(
	const char &compz,		// (input)
	const int &n,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n-1] (input/output)
	float *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	float *work,			// work[lwork] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void spteqr_(
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n-1] (input/output) */
	float *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[lwork] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

