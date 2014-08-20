#ifdef __cplusplus
extern "C" void clarf_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> *v,	// v[?] (input)
	const int &incv,		// (input)
	const complex<float> &tau,	// (input)
	complex<float> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work		// work[?] (workspace)
	);
#else /* ! __cplusplus */
void clarf_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *v,		/* v[?] (input) */
	const int *incv,		/* (input) */
	const complex_float *tau,	/* (input) */
	complex_float *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work		/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

