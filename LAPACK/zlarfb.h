#ifdef __cplusplus
extern "C" void zlarfb_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<double> *v,	// v[?][ldv] (input)
	const int &ldv,			// (input)
	const complex<double> *t,	// t[k][ldt] (input)
	const int &ldt,			// (input)
	complex<double> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work,		// work[k][ldwork] (workspace)
	const int &ldwork		// (input)
	);
#else /* ! __cplusplus */
void zlarfb_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_double *v,	/* v[?][ldv] (input) */
	const int *ldv,			/* (input) */
	const complex_double *t,	/* t[k][ldt] (input) */
	const int *ldt,			/* (input) */
	complex_double *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work,		/* work[k][ldwork] (workspace) */
	const int *ldwork		/* (input) */
	);
#endif /* ! __cplusplus */

