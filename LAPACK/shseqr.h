#ifdef __cplusplus
extern "C" void shseqr_(
	const char &job,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	float *h,			// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	float *wr,			// wr[n] (output)
	float *wi,			// wi[n] (output)
	float *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	float *work,			// work[n] (workspace)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void shseqr_(
	const char *job,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	float *h,			/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	float *wr,			/* wr[n] (output) */
	float *wi,			/* wi[n] (output) */
	float *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[n] (workspace) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

