#ifdef __cplusplus
extern "C" void dgegv_(
	const char &jobvl,		// (input)
	const char &jobvr,		// (input)
	const int &n,			// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[n][ldb] (input/output)
	const int &ldb,			// (input)
	double *alphar,			// alphar[n] (output)
	double *alphai,			// alphai[n] (output)
	double *beta,			// beta[n] (output)
	double *vl,			// vl[n][ldvl] (output)
	const int &ldvl,		// (input)
	double *vr,			// vr[n][ldvr] (output)
	const int &ldvr,		// (input)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgegv_(
	const char *jobvl,		/* (input) */
	const char *jobvr,		/* (input) */
	const int *n,			/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[n][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *alphar,			/* alphar[n] (output) */
	double *alphai,			/* alphai[n] (output) */
	double *beta,			/* beta[n] (output) */
	double *vl,			/* vl[n][ldvl] (output) */
	const int *ldvl,		/* (input) */
	double *vr,			/* vr[n][ldvr] (output) */
	const int *ldvr,		/* (input) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

