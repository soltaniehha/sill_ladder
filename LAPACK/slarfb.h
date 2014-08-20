#ifdef __cplusplus
extern "C" void slarfb_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const float *v,			// v[?][ldv] (input)
	const int &ldv,			// (input)
	const float *t,			// t[k][ldt] (input)
	const int &ldt,			// (input)
	float *c,			// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	float *work,			// work[k][ldwork] (workspace)
	const int &ldwork		// (input)
	);
#else /* ! __cplusplus */
void slarfb_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const float *v,			/* v[?][ldv] (input) */
	const int *ldv,			/* (input) */
	const float *t,			/* t[k][ldt] (input) */
	const int *ldt,			/* (input) */
	float *c,			/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *work,			/* work[k][ldwork] (workspace) */
	const int *ldwork		/* (input) */
	);
#endif /* ! __cplusplus */

