#ifdef __cplusplus
extern "C" void sstein_(
	const int &n,			// (input)
	const float *d,			// d[n] (input)
	const float *e,			// e[n] (input)
	const int &m,			// (input)
	const float *w,			// w[n] (input)
	const int *iblock,		// iblock[n] (input)
	const int *isplit,		// isplit[n] (input)
	float *z,			// z[m][ldz] (output)
	const int &ldz,			// (input)
	float *work,			// work[5*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int *ifail,			// ifail[m] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sstein_(
	const int *n,			/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e,			/* e[n] (input) */
	const int *m,			/* (input) */
	const float *w,			/* w[n] (input) */
	const int *iblock,		/* iblock[n] (input) */
	const int *isplit,		/* isplit[n] (input) */
	float *z,			/* z[m][ldz] (output) */
	const int *ldz,			/* (input) */
	float *work,			/* work[5*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *ifail,			/* ifail[m] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

