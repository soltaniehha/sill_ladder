#ifdef __cplusplus
extern "C" void sgeevx_(
	const char &balanc,		// (input)
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const char &sense,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	float *vl,			// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	float *vr,			// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	float *scale,			// scale[n] (output)
	float &abnrm,			// (output)
	float *rconde,			// rconde[n] (output)
	float *rcondv,			// rcondv[n] (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[2*n-2] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgeevx_(
	const char *balanc,		/* (input) */
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const char *sense,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	float *vl,			/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	float *vr,			/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	float *scale,			/* scale[n] (output) */
	float *abnrm,			/* (output) */
	float *rconde,			/* rconde[n] (output) */
	float *rcondv,			/* rcondv[n] (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[2*n-2] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

