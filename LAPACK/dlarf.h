#ifdef __cplusplus
extern "C" void dlarf_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *v,		// v[?] (input)
	const int &incv,		// (input)
	const double &tau,		// (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double *work			// work[?] (workspace)
	);
#else /* ! __cplusplus */
void dlarf_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *v,		/* v[?] (input) */
	const int *incv,		/* (input) */
	const double *tau,		/* (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work			/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

