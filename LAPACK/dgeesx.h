#ifdef __cplusplus
extern "C" void dgeesx_(
	const char &jobvs,		// (input)
	const char &sort,		// (input)
	int *select(const double &, const double &),	// (function)
	const char &sense,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &sdim,			// (output)
	double *wr,			// wr[n] (output)
	double *wi,			// wi[n] (output)
	double *vs,			// vs[n][ldvs] (output)
	const int &ldvs,		// (input)
	double &rconde,			// (output)
	double &rcondv,			// (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace)
	const int &liwork,		// (input)
	int *bwork,			// bwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgeesx_(
	const char *jobvs,		/* (input) */
	const char *sort,		/* (input) */
	int *select(const double *, const double *),	/* (function) */
	const char *sense,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *sdim,			/* (output) */
	double *wr,			/* wr[n] (output) */
	double *wi,			/* wi[n] (output) */
	double *vs,			/* vs[n][ldvs] (output) */
	const int *ldvs,		/* (input) */
	double *rconde,			/* (output) */
	double *rcondv,			/* (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace) */
	const int *liwork,		/* (input) */
	int *bwork,			/* bwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

