#ifdef __cplusplus
extern "C" void zlatzm_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *v,	// v[?] (input)
	const int &incv,		// (input)
	const complex<double> &tau,	// (input)
	complex<double> *c1,		// c1[?][ldc] (input/output)
	complex<double> *c2,		// c2[?][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work		// work[?] (workspace)
	);
#else /* ! __cplusplus */
void zlatzm_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *v,	/* v[?] (input) */
	const int *incv,		/* (input) */
	const complex_double *tau,	/* (input) */
	complex_double *c1,		/* c1[?][ldc] (input/output) */
	complex_double *c2,		/* c2[?][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work		/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

