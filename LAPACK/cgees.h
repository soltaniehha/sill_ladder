#ifdef __cplusplus
extern "C" void cgees_(
	const char &jobvs,		// (input)
	const char &sort,		// (input)
	int *select(const complex<float> &),	// (function)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &sdim,			// (output)
	complex<float> *w,		// w[n] (output)
	complex<float> *vs,		// vs[n][ldvs] (output)
	const int &ldvs,		// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[n] (workspace)
	int *bwork,			// bwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgees_(
	const char *jobvs,		/* (input) */
	const char *sort,		/* (input) */
	int *select(const complex_float *),	/* (function) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *sdim,			/* (output) */
	complex_float *w,		/* w[n] (output) */
	complex_float *vs,		/* vs[n][ldvs] (output) */
	const int *ldvs,		/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[n] (workspace) */
	int *bwork,			/* bwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

