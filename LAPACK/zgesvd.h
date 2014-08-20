#ifdef __cplusplus
extern "C" void zgesvd_(
	const char &jobu,		// (input)
	const char &jobvt,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *s,			// s[min(m,n)] (output)
	complex<double> *u,		// u[ucol][ldu] (output)
	const int &ldu,			// (input)
	complex<double> *vt,		// vt[n][ldvt] (output)
	const int &ldvt,		// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgesvd_(
	const char *jobu,		/* (input) */
	const char *jobvt,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *s,			/* s[min(m,n)] (output) */
	complex_double *u,		/* u[ucol][ldu] (output) */
	const int *ldu,			/* (input) */
	complex_double *vt,		/* vt[n][ldvt] (output) */
	const int *ldvt,		/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

