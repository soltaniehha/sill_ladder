#ifdef __cplusplus
extern "C" void sgeesx_(
	const char &jobvs,		// (input)
	const char &sort,		// (input)
	int *select(const float &, const float &),	// (function)
	const char &sense,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &sdim,			// (output)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	float *vs,			// vs[n][ldvs] (output)
	const int &ldvs,		// (input)
	float &rconde,			// (output)
	float &rcondv,			// (output)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *iwork,			// iwork[liwork] (workspace)
	const int &liwork,		// (input)
	int *bwork,			// bwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgeesx_(
	const char *jobvs,		/* (input) */
	const char *sort,		/* (input) */
	int *select(const float *, const float *),	/* (function) */
	const char *sense,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *sdim,			/* (output) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	float *vs,			/* vs[n][ldvs] (output) */
	const int *ldvs,		/* (input) */
	float *rconde,			/* (output) */
	float *rcondv,			/* (output) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *iwork,			/* iwork[liwork] (workspace) */
	const int *liwork,		/* (input) */
	int *bwork,			/* bwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

