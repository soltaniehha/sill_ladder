#ifdef __cplusplus
extern "C" void dlaebz_(
	const int &ijob,		// (input)
	const int &nitmax,		// (input)
	const int &n,			// (input)
	const int &mmax,		// (input)
	const int &minp,		// (input)
	const int &nbmin,		// (input)
	const double &abstol,		// (input)
	const double &reltol,		// (input)
	const double &pivmin,		// (input)
	const double *d,		// d[n] (input)
	const double *e,		// e[n] (input)
	const double *e2,		// e2[n] (input)
	int *nval,			// nval[minp] (input/output)
	double *ab,			// ab[2][mmax] (input/output)
	double *c,			// c[mmax] (input/output)
	int &mout,			// (output)
	int *nab,			// nab[2][mmax] (input/output)
	double *work,			// work[mmax] (workspace)
	int *iwork,			// iwork[mmax] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaebz_(
	const int *ijob,		/* (input) */
	const int *nitmax,		/* (input) */
	const int *n,			/* (input) */
	const int *mmax,		/* (input) */
	const int *minp,		/* (input) */
	const int *nbmin,		/* (input) */
	const double *abstol,		/* (input) */
	const double *reltol,		/* (input) */
	const double *pivmin,		/* (input) */
	const double *d,		/* d[n] (input) */
	const double *e,		/* e[n] (input) */
	const double *e2,		/* e2[n] (input) */
	int *nval,			/* nval[minp] (input/output) */
	double *ab,			/* ab[2][mmax] (input/output) */
	double *c,			/* c[mmax] (input/output) */
	int *mout,			/* (output) */
	int *nab,			/* nab[2][mmax] (input/output) */
	double *work,			/* work[mmax] (workspace) */
	int *iwork,			/* iwork[mmax] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

