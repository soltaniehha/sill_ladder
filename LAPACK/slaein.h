#ifdef __cplusplus
extern "C" void slaein_(
	const int &rightv,		// (input)
	const int &noinit,		// (input)
	const int &n,			// (input)
	const float *h,			// h[n][ldh] (input)
	const int &ldh,			// (input)
	const float &wr,		// (input)
	const float &wi,		// (input)
	float *vr,			// vr[n] (input/output)
	float *vi,			// vi[n] (input/output)
	float *b,			// b[n][ldb] (workspace)
	const int &ldb,			// (input)
	float *work,			// work[n] (workspace)
	const float &eps3,		// (input)
	const float &smlnum,		// (input)
	const float &bignum,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaein_(
	const int *rightv,		/* (input) */
	const int *noinit,		/* (input) */
	const int *n,			/* (input) */
	const float *h,			/* h[n][ldh] (input) */
	const int *ldh,			/* (input) */
	const float *wr,		/* (input) */
	const float *wi,		/* (input) */
	float *vr,			/* vr[n] (input/output) */
	float *vi,			/* vi[n] (input/output) */
	float *b,			/* b[n][ldb] (workspace) */
	const int *ldb,			/* (input) */
	float *work,			/* work[n] (workspace) */
	const float *eps3,		/* (input) */
	const float *smlnum,		/* (input) */
	const float *bignum,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

