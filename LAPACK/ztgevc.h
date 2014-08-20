#ifdef __cplusplus
extern "C" void ztgevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const complex<double> *b,	// b[n][ldb] (input)
	const int &ldb,			// (input)
	complex<double> *vl,		// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	complex<double> *vr,		// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<double> *work,		// work[2*n] (workspace)
	double *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ztgevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const complex_double *b,	/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_double *vl,		/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	complex_double *vr,		/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_double *work,		/* work[2*n] (workspace) */
	double *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

