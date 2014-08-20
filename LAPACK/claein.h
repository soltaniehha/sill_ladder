#ifdef __cplusplus
extern "C" void claein_(
	const int &rightv,		// (input)
	const int &noinit,		// (input)
	const int &n,			// (input)
	const complex<float> *h,	// h[n][ldh] (input)
	const int &ldh,			// (input)
	const complex<float> &w,	// (input)
	complex<float> *v,		// v[n] (input/output)
	complex<float> *b,		// b[n][ldb] (workspace)
	const int &ldb,			// (input)
	float *rwork,			// rwork[n] (workspace)
	const float &eps3,		// (input)
	const float &smlnum,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void claein_(
	const int *rightv,		/* (input) */
	const int *noinit,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *h,		/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	const complex_float *w,		/* (input) */
	complex_float *v,		/* v[n] (input/output) */
	complex_float *b,		/* b[n][ldb] (workspace) */
	const int *ldb,			/* (input) */
	float *rwork,			/* rwork[n] (workspace) */
	const float *eps3,		/* (input) */
	const float *smlnum,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

