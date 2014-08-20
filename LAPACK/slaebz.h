#ifdef __cplusplus
extern "C" void slaebz_(
	const int &ijob,		// (input)
	const int &nitmax,		// (input)
	const int &n,			// (input)
	const int &mmax,		// (input)
	const int &minp,		// (input)
	const int &nbmin,		// (input)
	const float &abstol,		// (input)
	const float &reltol,		// (input)
	const float &pivmin,		// (input)
	const float *d,			// d[n] (input)
	const float *e,			// e[n] (input)
	const float *e2,		// e2[n] (input)
	int *nval,			// nval[minp] (input/output)
	float *ab,			// ab[2][mmax] (input/output)
	float *c,			// c[mmax] (input/output)
	int &mout,			// (output)
	int *nab,			// nab[2][mmax] (input/output)
	float *work,			// work[mmax] (workspace)
	int *iwork,			// iwork[mmax] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaebz_(
	const int *ijob,		/* (input) */
	const int *nitmax,		/* (input) */
	const int *n,			/* (input) */
	const int *mmax,		/* (input) */
	const int *minp,		/* (input) */
	const int *nbmin,		/* (input) */
	const float *abstol,		/* (input) */
	const float *reltol,		/* (input) */
	const float *pivmin,		/* (input) */
	const float *d,			/* d[n] (input) */
	const float *e,			/* e[n] (input) */
	const float *e2,		/* e2[n] (input) */
	int *nval,			/* nval[minp] (input/output) */
	float *ab,			/* ab[2][mmax] (input/output) */
	float *c,			/* c[mmax] (input/output) */
	int *mout,			/* (output) */
	int *nab,			/* nab[2][mmax] (input/output) */
	float *work,			/* work[mmax] (workspace) */
	int *iwork,			/* iwork[mmax] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

