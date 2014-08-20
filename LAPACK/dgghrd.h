#ifdef __cplusplus
extern "C" void dgghrd_(
	const char &compq,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgghrd_(
	const char *compq,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

