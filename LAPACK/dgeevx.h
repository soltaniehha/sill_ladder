#ifdef __cplusplus
extern "C" void dgeevx_(
	const char &balanc,		// (input)
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const char &sense,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *wr,			// wr[n] (output)
	double *wi,			// wi[n] (output)
	double *vl,			// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	double *vr,			// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	int &ilo,			// (output)
	int &ihi,			// (output)
	double *scale,			// scale[n] (output)
	double &abnrm,			// (output)
	double *rconde,			// rconde[n] (output)
	double *rcondv,			// rcondv[n] (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[2*n-2] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgeevx_(
	const char *balanc,		/* (input) */
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const char *sense,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *wr,			/* wr[n] (output) */
	double *wi,			/* wi[n] (output) */
	double *vl,			/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	double *vr,			/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	int *ilo,			/* (output) */
	int *ihi,			/* (output) */
	double *scale,			/* scale[n] (output) */
	double *abnrm,			/* (output) */
	double *rconde,			/* rconde[n] (output) */
	double *rcondv,			/* rcondv[n] (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[2*n-2] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

