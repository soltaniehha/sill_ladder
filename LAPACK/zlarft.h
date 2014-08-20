#ifdef __cplusplus
extern "C" void zlarft_(
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	complex<double> *v,		// v[?][ldv] (input/output)
	const int &ldv,			// (input)
	const complex<double> *tau,	// tau[k] (input)
	complex<double> *t,		// t[k][ldt] (output)
	const int &ldt			// (input)
	);
#else /* ! __cplusplus */
void zlarft_(
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	complex_double *v,		/* v[?][ldv] (input/output) */
	const int *ldv,			/* (input) */
	const complex_double *tau,	/* tau[k] (input) */
	complex_double *t,		/* t[k][ldt] (output) */
	const int *ldt			/* (input) */
	);
#endif /* ! __cplusplus */

