#ifdef __cplusplus
extern "C" void dbdsqr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ncvt,		// (input)
	const int &nru,			// (input)
	const int &ncc,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n] (input/output)
	double *vt,			// vt[ncvt][ldvt] (input/output)
	const int &ldvt,		// (input)
	double *u,			// u[n][ldu] (input/output)
	const int &ldu,			// (input)
	double *c,			// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dbdsqr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ncvt,		/* (input) */
	const int *nru,			/* (input) */
	const int *ncc,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	double *vt,			/* vt[ncvt][ldvt] (input/output) */
	const int *ldvt,		/* (input) */
	double *u,			/* u[n][ldu] (input/output) */
	const int *ldu,			/* (input) */
	double *c,			/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

