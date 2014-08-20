#ifdef __cplusplus
extern "C" void sbdsqr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ncvt,		// (input)
	const int &nru,			// (input)
	const int &ncc,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n] (input/output)
	float *vt,			// vt[ncvt][ldvt] (input/output)
	const int &ldvt,		// (input)
	float *u,			// u[n][ldu] (input/output)
	const int &ldu,			// (input)
	float *c,			// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	float *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sbdsqr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ncvt,		/* (input) */
	const int *nru,			/* (input) */
	const int *ncc,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n] (input/output) */
	float *vt,			/* vt[ncvt][ldvt] (input/output) */
	const int *ldvt,		/* (input) */
	float *u,			/* u[n][ldu] (input/output) */
	const int *ldu,			/* (input) */
	float *c,			/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

