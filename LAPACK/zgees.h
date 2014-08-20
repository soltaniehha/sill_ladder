#ifdef __cplusplus
extern "C" void zgees_(
	const char &jobvs,		// (input)
	const char &sort,		// (input)
	int *select(const complex<double> &),	// (function)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &sdim,			// (output)
	complex<double> *w,		// w[n] (output)
	complex<double> *vs,		// vs[n][ldvs] (output)
	const int &ldvs,		// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	double *rwork,			// rwork[n] (workspace)
	int *bwork,			// bwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgees_(
	const char *jobvs,		/* (input) */
	const char *sort,		/* (input) */
	int *select(const complex_double *),	/* (function) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *sdim,			/* (output) */
	complex_double *w,		/* w[n] (output) */
	complex_double *vs,		/* vs[n][ldvs] (output) */
	const int *ldvs,		/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	double *rwork,			/* rwork[n] (workspace) */
	int *bwork,			/* bwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

