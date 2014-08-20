#ifdef __cplusplus
extern "C" void dtgevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	const double *b,		// b[n][ldb] (input)
	const int &ldb,			// (input)
	double *vl,			// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	double *vr,			// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	double *work,			// work[6*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dtgevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const double *b,		/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	double *vl,			/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	double *vr,			/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	double *work,			/* work[6*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

