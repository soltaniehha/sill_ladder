#ifdef __cplusplus
extern "C" void dlarft_(
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	double *v,			// v[?][ldv] (input/output)
	const int &ldv,			// (input)
	const double *tau,		// tau[k] (input)
	double *t,			// t[k][ldt] (output)
	const int &ldt			// (input)
	);
#else /* ! __cplusplus */
void dlarft_(
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	double *v,			/* v[?][ldv] (input/output) */
	const int *ldv,			/* (input) */
	const double *tau,		/* tau[k] (input) */
	double *t,			/* t[k][ldt] (output) */
	const int *ldt			/* (input) */
	);
#endif /* ! __cplusplus */

