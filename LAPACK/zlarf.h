#ifdef __cplusplus
extern "C" void zlarf_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *v,	// v[?] (input)
	const int &incv,		// (input)
	const complex<double> &tau,	// (input)
	complex<double> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work		// work[?] (workspace)
	);
#else /* ! __cplusplus */
void zlarf_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *v,	/* v[?] (input) */
	const int *incv,		/* (input) */
	const complex_double *tau,	/* (input) */
	complex_double *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work		/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

