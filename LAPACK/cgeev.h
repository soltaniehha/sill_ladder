#ifdef __cplusplus
extern "C" void cgeev_(
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *w,		// w[n] (output)
	complex<float> *vl,		// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	complex<float> *vr,		// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgeev_(
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *w,		/* w[n] (output) */
	complex_float *vl,		/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	complex_float *vr,		/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

