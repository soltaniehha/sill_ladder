#ifdef __cplusplus
extern "C" void zstein_(
	const int &n,			// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n] (input)
	const int &m,			// (input)
	const double *w,		// w[n] (input)
	const int *iblock,		// iblock[n] (input)
	const int *isplit,		// isplit[n] (input)
	complex<double> *z,		// z[m][ldz] (output)
	const int &ldz,			// (input)
	double *work,			// work[5*n] (workspace)
	int *iwork,			// iwork[n] (workspace)
	int *ifail,			// ifail[m] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zstein_(
	const int *n,			/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n] (input) */
	const int *m,			/* (input) */
	const double *w,		/* w[n] (input) */
	const int *iblock,		/* iblock[n] (input) */
	const int *isplit,		/* isplit[n] (input) */
	complex_double *z,		/* z[m][ldz] (output) */
	const int *ldz,			/* (input) */
	double *work,			/* work[5*n] (workspace) */
	int *iwork,			/* iwork[n] (workspace) */
	int *ifail,			/* ifail[m] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

