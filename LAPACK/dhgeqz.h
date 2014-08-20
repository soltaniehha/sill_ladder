#ifdef __cplusplus
extern "C" void dhgeqz_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *alphar,			// alphar[n] (output)
	double *alphai,			// alphai[n] (output)
	double *beta,			// beta[n] (output)
	double *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	double *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dhgeqz_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *alphar,			/* alphar[n] (output) */
	double *alphai,			/* alphai[n] (output) */
	double *beta,			/* beta[n] (output) */
	double *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	double *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

