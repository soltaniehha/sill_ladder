#ifdef __cplusplus
extern "C" void dgesvd_(
	const char &jobu,		// (input)
	const char &jobvt,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *s,			// s[min(m,n)] (output)
	double *u,			// u[ucol][ldu] (output)
	const int &ldu,			// (input)
	double *vt,			// vt[n][ldvt] (output)
	const int &ldvt,		// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgesvd_(
	const char *jobu,		/* (input) */
	const char *jobvt,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *s,			/* s[min(m,n)] (output) */
	double *u,			/* u[ucol][ldu] (output) */
	const int *ldu,			/* (input) */
	double *vt,			/* vt[n][ldvt] (output) */
	const int *ldvt,		/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

