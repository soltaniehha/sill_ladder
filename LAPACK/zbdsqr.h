#ifdef __cplusplus
extern "C" void zbdsqr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ncvt,		// (input)
	const int &nru,			// (input)
	const int &ncc,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n] (input/output)
	complex<double> *vt,		// vt[ncvt][ldvt] (input/output)
	const int &ldvt,		// (input)
	complex<double> *u,		// u[n][ldu] (input/output)
	const int &ldu,			// (input)
	complex<double> *c,		// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	double *rwork,			// rwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zbdsqr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ncvt,		/* (input) */
	const int *nru,			/* (input) */
	const int *ncc,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	complex_double *vt,		/* vt[ncvt][ldvt] (input/output) */
	const int *ldvt,		/* (input) */
	complex_double *u,		/* u[n][ldu] (input/output) */
	const int *ldu,			/* (input) */
	complex_double *c,		/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *rwork,			/* rwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

