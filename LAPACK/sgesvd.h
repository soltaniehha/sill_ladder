#ifdef __cplusplus
extern "C" void sgesvd_(
	const char &jobu,		// (input)
	const char &jobvt,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *s,			// s[min(m,n)] (output)
	float *u,			// u[ucol][ldu] (output)
	const int &ldu,			// (input)
	float *vt,			// vt[n][ldvt] (output)
	const int &ldvt,		// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgesvd_(
	const char *jobu,		/* (input) */
	const char *jobvt,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *s,			/* s[min(m,n)] (output) */
	float *u,			/* u[ucol][ldu] (output) */
	const int *ldu,			/* (input) */
	float *vt,			/* vt[n][ldvt] (output) */
	const int *ldvt,		/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

