#ifdef __cplusplus
extern "C" void dlarfb_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const double *v,		// v[?][ldv] (input)
	const int &ldv,			// (input)
	const double *t,		// t[k][ldt] (input)
	const int &ldt,			// (input)
	double *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	double *work,			// work[k][ldwork] (workspace)
	const int &ldwork		// (input)
	);
#else /* ! __cplusplus */
void dlarfb_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const double *v,		/* v[?][ldv] (input) */
	const int *ldv,			/* (input) */
	const double *t,		/* t[k][ldt] (input) */
	const int *ldt,			/* (input) */
	double *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	double *work,			/* work[k][ldwork] (workspace) */
	const int *ldwork		/* (input) */
	);
#endif /* ! __cplusplus */

