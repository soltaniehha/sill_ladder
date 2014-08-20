#ifdef __cplusplus
extern "C" void zlaein_(
	const int &rightv,		// (input)
	const int &noinit,		// (input)
	const int &n,			// (input)
	const complex<double> *h,	// h[n][ldh] (input)
	const int &ldh,			// (input)
	const complex<double> &w,	// (input)
	complex<double> *v,		// v[n] (input/output)
	complex<double> *b,		// b[n][ldb] (workspace)
	const int &ldb,			// (input)
	double *rwork,			// rwork[n] (workspace)
	const double &eps3,		// (input)
	const double &smlnum,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlaein_(
	const int *rightv,		/* (input) */
	const int *noinit,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *h,	/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	const complex_double *w,	/* (input) */
	complex_double *v,		/* v[n] (input/output) */
	complex_double *b,		/* b[n][ldb] (workspace) */
	const int *ldb,			/* (input) */
	double *rwork,			/* rwork[n] (workspace) */
	const double *eps3,		/* (input) */
	const double *smlnum,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

