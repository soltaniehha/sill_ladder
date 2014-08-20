#ifdef __cplusplus
extern "C" void sgels_(
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgels_(
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

