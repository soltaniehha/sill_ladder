#ifdef __cplusplus
extern "C" void dgelss_(
	const int &m,			// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda,			// (input)
	double *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	double *s,			// s[min(m,n)] (output)
	const double &rcond,		// (input)
	int &rank,			// (output)
	double *work,			// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgelss_(
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	double *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	double *s,			/* s[min(m,n)] (output) */
	const double *rcond,		/* (input) */
	int *rank,			/* (output) */
	double *work,			/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

