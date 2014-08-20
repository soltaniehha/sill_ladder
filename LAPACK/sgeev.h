#ifdef __cplusplus
extern "C" void sgeev_(
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	float *vl,			// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	float *vr,			// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgeev_(
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	float *vl,			/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	float *vr,			/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

