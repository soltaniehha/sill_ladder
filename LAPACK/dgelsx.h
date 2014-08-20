#ifdef __cplusplus
extern "C" void dgelsx_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int *jpvt,			// jpvt[n] (input/output)
	const double &rcond,		// (input)
	int &rank,			// (output)
	double *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgelsx_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *jpvt,			/* jpvt[n] (input/output) */
	const double *rcond,		/* (input) */
	int *rank,			/* (output) */
	double *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

