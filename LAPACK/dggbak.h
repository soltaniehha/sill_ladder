#ifdef __cplusplus
extern "C" void dggbak_(
	const char &job,		// (input)
	const char &side,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	const double *lscale,		// lscale[n] (input)
	const double *rscale,		// rscale[n] (input)
	const int &m,			// (input)
	double *v,			// v[m][ldv] (input/output)
	const int &ldv,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dggbak_(
	const char *job,		/* (input) */
	const char *side,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	const double *lscale,		/* lscale[n] (input) */
	const double *rscale,		/* rscale[n] (input) */
	const int *m,			/* (input) */
	double *v,			/* v[m][ldv] (input/output) */
	const int *ldv,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

