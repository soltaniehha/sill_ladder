#ifdef __cplusplus
extern "C" void cbdsqr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const int &ncvt,		// (input)
	const int &nru,			// (input)
	const int &ncc,			// (input)
	float *d,			// d[n] (input/output)
	float *e,			// e[n] (input/output)
	complex<float> *vt,		// vt[ncvt][ldvt] (input/output)
	const int &ldvt,		// (input)
	complex<float> *u,		// u[n][ldu] (input/output)
	const int &ldu,			// (input)
	complex<float> *c,		// c[ncc][ldc] (input/output)
	const int &ldc,			// (input)
	float *rwork,			// rwork[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cbdsqr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const int *ncvt,		/* (input) */
	const int *nru,			/* (input) */
	const int *ncc,			/* (input) */
	float *d,			/* d[n] (input/output) */
	float *e,			/* e[n] (input/output) */
	complex_float *vt,		/* vt[ncvt][ldvt] (input/output) */
	const int *ldvt,		/* (input) */
	complex_float *u,		/* u[n][ldu] (input/output) */
	const int *ldu,			/* (input) */
	complex_float *c,		/* c[ncc][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *rwork,			/* rwork[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

