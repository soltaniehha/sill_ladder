#ifdef __cplusplus
extern "C" void sgees_(
	const char &jobvs,		// (input)
	const char &sort,		// (input)
	int *select(const float &, const float &),	// (function)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	int &sdim,			// (output)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	float *vs,			// vs[n][ldvs] (output)
	const int &ldvs,		// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int *bwork,			// bwork[n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgees_(
	const char *jobvs,		/* (input) */
	const char *sort,		/* (input) */
	int *select(const float *, const float *),	/* (function) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	int *sdim,			/* (output) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	float *vs,			/* vs[n][ldvs] (output) */
	const int *ldvs,		/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *bwork,			/* bwork[n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

