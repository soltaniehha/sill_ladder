#ifdef __cplusplus
extern "C" void dlaein_(
	const int &rightv,		// (input)
	const int &noinit,		// (input)
	const int &n,			// (input)
	const double *h,		// h[n][ldh] (input)
	const int &ldh,			// (input)
	const double &wr,		// (input)
	const double &wi,		// (input)
	double *vr,			// vr[n] (input/output)
	double *vi,			// vi[n] (input/output)
	double *b,			// b[n][ldb] (workspace)
	const int &ldb,			// (input)
	double *work,			// work[n] (workspace)
	const double &eps3,		// (input)
	const double &smlnum,		// (input)
	const double &bignum,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaein_(
	const int *rightv,		/* (input) */
	const int *noinit,		/* (input) */
	const int *n,			/* (input) */
	const double *h,		/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	const double *wr,		/* (input) */
	const double *wi,		/* (input) */
	double *vr,			/* vr[n] (input/output) */
	double *vi,			/* vi[n] (input/output) */
	double *b,			/* b[n][ldb] (workspace) */
	const int *ldb,			/* (input) */
	double *work,			/* work[n] (workspace) */
	const double *eps3,		/* (input) */
	const double *smlnum,		/* (input) */
	const double *bignum,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

