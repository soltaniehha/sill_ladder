#ifdef __cplusplus
extern "C" void cgelsx_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	const float &rcond,		// (input)
	int &rank,			// (output)
	complex<float> *work,		// work[?] (workspace)
	float *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgelsx_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	const float *rcond,		/* (input) */
	int *rank,			/* (output) */
	complex_float *work,		/* work[?] (workspace) */
	float *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

