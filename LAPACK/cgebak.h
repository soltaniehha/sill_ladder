#ifdef __cplusplus
extern "C" void cgebak_(
	const char &job,		// (input)
	const char &side,		// (input)
	const int &n,			// (input)
	const int &ilo,			// (input)
	const int &ihi,			// (input)
	const float *scale,		// scale[n] (input)
	const int &m,			// (input)
	complex<float> *v,		// v[m][ldv] (input/output)
	const int &ldv,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgebak_(
	const char *job,		/* (input) */
	const char *side,		/* (input) */
	const int *n,			/* (input) */
	const int *ilo,			/* (input) */
	const int *ihi,			/* (input) */
	const float *scale,		/* scale[n] (input) */
	const int *m,			/* (input) */
	complex_float *v,		/* v[m][ldv] (input/output) */
	const int *ldv,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

