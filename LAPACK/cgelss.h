#ifdef __cplusplus
extern "C" void cgelss_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	float *s,			// s[min(m,n)] (output)
	const float &rcond,		// (input)
	int &rank,			// (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[5*min(m,n)-1] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgelss_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *s,			/* s[min(m,n)] (output) */
	const float *rcond,		/* (input) */
	int *rank,			/* (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[5*min(m,n)-1] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

