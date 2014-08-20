#ifdef __cplusplus
extern "C" void dgees_(
	const char &jobvs,		// (input)
	const char &sort,		// (input)
	int *select(const double &, const double &),	// (function)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &sdim,			// (output)
	double *wr,			// wr[n] (output)
	double *wi,			// wi[n] (output)
	double *vs,			// vs[n][ldvs] (output)
	const int &ldvs,		// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *bwork,			// bwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgees_(
	const char *jobvs,		/* (input) */
	const char *sort,		/* (input) */
	int *select(const double *, const double *),	/* (function) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *sdim,			/* (output) */
	double *wr,			/* wr[n] (output) */
	double *wi,			/* wi[n] (output) */
	double *vs,			/* vs[n][ldvs] (output) */
	const int *ldvs,		/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *bwork,			/* bwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

