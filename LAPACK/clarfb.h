#ifdef __cplusplus
extern "C" void clarfb_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<float> *v,	// v[?][ldv] (input)
	const int &ldv,			// (input)
	const complex<float> *t,	// t[k][ldt] (input)
	const int &ldt,			// (input)
	complex<float> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work,		// work[k][ldwork] (workspace)
	const int &ldwork		// (input)
	);
#else /* ! __cplusplus */
void clarfb_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_float *v,		/* v[?][ldv] (input) */
	const int *ldv,			/* (input) */
	const complex_float *t,		/* t[k][ldt] (input) */
	const int *ldt,			/* (input) */
	complex_float *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work,		/* work[k][ldwork] (workspace) */
	const int *ldwork		/* (input) */
	);
#endif /* ! __cplusplus */

