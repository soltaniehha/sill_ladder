#ifdef __cplusplus
extern "C" void slarft_(
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	float *v,			// v[?][ldv] (input/output)
	const int &ldv,			// (input)
	const float *tau,		// tau[k] (input)
	float *t,			// t[k][ldt] (output)
	const int &ldt			// (input)
	);
#else /* ! __cplusplus */
void slarft_(
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	float *v,			/* v[?][ldv] (input/output) */
	const int *ldv,			/* (input) */
	const float *tau,		/* tau[k] (input) */
	float *t,			/* t[k][ldt] (output) */
	const int *ldt			/* (input) */
	);
#endif /* ! __cplusplus */

