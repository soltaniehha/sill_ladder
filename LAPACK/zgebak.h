#ifdef __cplusplus
extern "C" void zgebak_(
	const char &job,		// (input)
	const char &side,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	const double *scale,		// scale[n] (input)
	const int &m,			// (input)
	complex<double> *v,		// v[m][ldv] (input/output)
	const int &ldv,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zgebak_(
	const char *job,		/* (input) */
	const char *side,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	const double *scale,		/* scale[n] (input) */
	const int *m,			/* (input) */
	complex_double *v,		/* v[m][ldv] (input/output) */
	const int *ldv,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

