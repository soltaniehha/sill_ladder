#ifdef __cplusplus
extern "C" void shgeqz_(
	const char &job,		// (input)
	const char &compq,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *alphar,			// alphar[n] (output)
	float *alphai,			// alphai[n] (output)
	float *beta,			// beta[n] (output)
	float *q,			// q[n][ldq] (input/output)
	const int &ldq,			// (input)
	float *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void shgeqz_(
	const char *job,		/* (input) */
	const char *compq,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *alphar,			/* alphar[n] (output) */
	float *alphai,			/* alphai[n] (output) */
	float *beta,			/* beta[n] (output) */
	float *q,			/* q[n][ldq] (input/output) */
	const int *ldq,			/* (input) */
	float *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

