#ifdef __cplusplus
extern "C" void zpteqr_(
	const char &compz,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n-1] (input/output)
	complex<double> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	double *work,			// work[lwork] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zpteqr_(
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n-1] (input/output) */
	complex_double *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[lwork] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

