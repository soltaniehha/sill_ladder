#ifdef __cplusplus
extern "C" void clarft_(
	const char &direct,		// (input)
	const char &storev,		// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	complex<float> *v,		// v[?][ldv] (input/output)
	const int &ldv,			// (input)
	const complex<float> *tau,	// tau[k] (input)
	complex<float> *t,		// t[k][ldt] (output)
	const int &ldt			// (input)
	);
#else /* ! __cplusplus */
void clarft_(
	const char *direct,		/* (input) */
	const char *storev,		/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	complex_float *v,		/* v[?][ldv] (input/output) */
	const int *ldv,			/* (input) */
	const complex_float *tau,	/* tau[k] (input) */
	complex_float *t,		/* t[k][ldt] (output) */
	const int *ldt			/* (input) */
	);
#endif /* ! __cplusplus */

