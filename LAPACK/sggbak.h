#ifdef __cplusplus
extern "C" void sggbak_(
	const char &job,		// (input)
	const char &side,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	const float *lscale,		// lscale[n] (input)
	const float *rscale,		// rscale[n] (input)
	const int &m,			// (input)
	float *v,			// v[m][ldv] (input/output)
	const int &ldv,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sggbak_(
	const char *job,		/* (input) */
	const char *side,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	const float *lscale,		/* lscale[n] (input) */
	const float *rscale,		/* rscale[n] (input) */
	const int *m,			/* (input) */
	float *v,			/* v[m][ldv] (input/output) */
	const int *ldv,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

