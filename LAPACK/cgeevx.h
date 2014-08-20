#ifdef __cplusplus
extern "C" void cgeevx_(
	const char &balanc,		// (input)
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const char &sense,		// (input)
	const int &n,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	complex<float> *w,		// w[n] (output)
	complex<float> *vl,		// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	complex<float> *vr,		// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	float *scale,			// scale[n] (output)
	float &abnrm,			// (output)
	float *rconde,			// rconde[n] (output)
	float *rcondv,			// rcondv[n] (output)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	float *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgeevx_(
	const char *balanc,		/* (input) */
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const char *sense,		/* (input) */
	const int *n,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	complex_float *w,		/* w[n] (output) */
	complex_float *vl,		/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	complex_float *vr,		/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	float *scale,			/* scale[n] (output) */
	float *abnrm,			/* (output) */
	float *rconde,			/* rconde[n] (output) */
	float *rcondv,			/* rcondv[n] (output) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	float *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

