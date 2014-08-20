#ifdef __cplusplus
extern "C" void dstevx_(
	const char &jobz,		// (input)
	const char &range,		// (input)
	const int &n,			// (input)
	double *d,			// d[n] (input/output)
	double *e,			// e[n] (input/output)
	const double &vl,		// (input)
	const double &vu,		// (input)
	const int &il,			// (input)
	const int &iu,			// (input)
	const double &abstol,		// (input)
	int &m,				// (output)
	double *w,			// w[n] (output)
	double *z,			// z[max(1,m)][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[5*n] (workspace)
	int *iwork,			// iwork[5*n] (workspace)
	int *ifail,			// ifail[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dstevx_(
	const char *jobz,		/* (input) */
	const char *range,		/* (input) */
	const int *n,			/* (input) */
	double *d,			/* d[n] (input/output) */
	double *e,			/* e[n] (input/output) */
	const double *vl,		/* (input) */
	const double *vu,		/* (input) */
	const int *il,			/* (input) */
	const int *iu,			/* (input) */
	const double *abstol,		/* (input) */
	int *m,				/* (output) */
	double *w,			/* w[n] (output) */
	double *z,			/* z[max(1,m)][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[5*n] (workspace) */
	int *iwork,			/* iwork[5*n] (workspace) */
	int *ifail,			/* ifail[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

