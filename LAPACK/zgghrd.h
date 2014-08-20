#ifdef __cplusplus
extern "C" void zgghrd_(
	const char &compq,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *q,		// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	complex<double> *z,		// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgghrd_(
	const char *compq,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *q,		/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	complex_double *z,		/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

