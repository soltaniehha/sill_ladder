#ifdef __cplusplus
extern "C" void zggbak_(
	const char &job,		// (input)
	const char &side,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	const double *lscale,		// lscale[n] (input)
	const double *rscale,		// rscale[n] (input)
	const int &m,			// (input)
	complex<double> *v,		// v[m][ldv] (input/output)
	const int &ldv,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zggbak_(
	const char *job,		/* (input) */
	const char *side,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	const double *lscale,		/* lscale[n] (input) */
	const double *rscale,		/* rscale[n] (input) */
	const int *m,			/* (input) */
	complex_double *v,		/* v[m][ldv] (input/output) */
	const int *ldv,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

