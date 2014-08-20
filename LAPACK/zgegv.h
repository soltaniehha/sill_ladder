#ifdef __cplusplus
extern "C" void zgegv_(
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<double> *b,		// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	complex<double> *alpha,		// alpha[n] (output)
	complex<double> *beta,		// beta[n] (output)
	complex<double> *vl,		// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	complex<double> *vr,		// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[8*n] (workspace/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgegv_(
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_double *b,		/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	complex_double *alpha,		/* alpha[n] (output) */
	complex_double *beta,		/* beta[n] (output) */
	complex_double *vl,		/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	complex_double *vr,		/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[8*n] (workspace/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

