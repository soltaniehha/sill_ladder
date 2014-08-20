#ifdef __cplusplus
extern "C" void sgelsx_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	const float &rcond,		// (input)
	int &rank,			// (output)
	float *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgelsx_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	const float *rcond,		/* (input) */
	int *rank,			/* (output) */
	float *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

