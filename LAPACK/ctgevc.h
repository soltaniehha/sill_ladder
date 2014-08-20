#ifdef __cplusplus
extern "C" void ctgevc_(
	const char &side,		// (input)
	const char &howmny,		// (input)
	const int *select,		// select[n] (input)
	const int &n,			// (input)
	const complex<float> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const complex<float> *b,	// b[n][ldb] (input)
	const int &ldb,			// (input)
	complex<float> *vl,		// vl[mm][ldvl] (input/output)
	const int &ldvl,		// (input)
	complex<float> *vr,		// vr[mm][ldvr] (input/output)
	const int &ldvr,		// (input)
	const int &mm,			// (input)
	int &m,				// (output)
	complex<float> *work,		// work[2*n] (workspace)
	float *rwork,			// rwork[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctgevc_(
	const char *side,		/* (input) */
	const char *howmny,		/* (input) */
	const int *select,		/* select[n] (input) */
	const int *n,			/* (input) */
	const complex_float *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const complex_float *b,		/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_float *vl,		/* vl[mm][ldvl] (input/output) */
	const int *ldvl,		/* (input) */
	complex_float *vr,		/* vr[mm][ldvr] (input/output) */
	const int *ldvr,		/* (input) */
	const int *mm,			/* (input) */
	int *m,				/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	float *rwork,			/* rwork[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

