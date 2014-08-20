#ifdef __cplusplus
extern "C" void cgesvd_(
	const char &jobu,		// (input)
	const char &jobvt,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *s,			// s[min(m,n)] (output)
	complex<float> *u,		// u[ucol][ldu] (output)
	const int &ldu,			// (input)
	complex<float> *vt,		// vt[n][ldvt] (output)
	const int &ldvt,		// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgesvd_(
	const char *jobu,		/* (input) */
	const char *jobvt,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *s,			/* s[min(m,n)] (output) */
	complex_float *u,		/* u[ucol][ldu] (output) */
	const int *ldu,			/* (input) */
	complex_float *vt,		/* vt[n][ldvt] (output) */
	const int *ldvt,		/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

