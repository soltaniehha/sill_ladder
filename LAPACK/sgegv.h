#ifdef __cplusplus
extern "C" void sgegv_(
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const int &n,			// (input)
	float *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	float *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	float *alphar,			// alphar[n] (output)
	float *alphai,			// alphai[n] (output)
	float *beta,			// beta[n] (output)
	float *vl,			// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	float *vr,			// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	float *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgegv_(
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const int *n,			/* (input) */
	float *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	float *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	float *alphar,			/* alphar[n] (output) */
	float *alphai,			/* alphai[n] (output) */
	float *beta,			/* beta[n] (output) */
	float *vl,			/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	float *vr,			/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	float *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

