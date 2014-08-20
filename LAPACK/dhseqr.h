#ifdef __cplusplus
extern "C" void dhseqr_(
	const char &job,		// (input)
	const char &compz,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	double *h,			// h[n][ldh] (input/output)
	const int &ldh,			// (input)
	double *wr,			// wr[n] (output)
	double *wi,			// wi[n] (output)
	double *z,			// z[n][ldz] (input/output)
	const int &ldz,			// (input)
	double *work,			// work[n] (workspace)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dhseqr_(
	const char *job,		/* (input) */
	const char *compz,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	double *h,			/* h[n][ldh] (input/output) */
	const int *ldh,			/* (input) */
	double *wr,			/* wr[n] (output) */
	double *wi,			/* wi[n] (output) */
	double *z,			/* z[n][ldz] (input/output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[n] (workspace) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

