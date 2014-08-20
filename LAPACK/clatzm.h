#ifdef __cplusplus
extern "C" void clatzm_(
	const char &side,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> *v,	// v[?] (input)
	const int &incv,		// (input)
	const complex<float> &tau,	// (input)
	complex<float> *c1,		// c1[?][ldc] (input/output)
	complex<float> *c2,		// c2[?][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work		// work[?] (workspace)
	);
#else /* ! __cplusplus */
void clatzm_(
	const char *side,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *v,		/* v[?] (input) */
	const int *incv,		/* (input) */
	const complex_float *tau,	/* (input) */
	complex_float *c1,		/* c1[?][ldc] (input/output) */
	complex_float *c2,		/* c2[?][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work		/* work[?] (workspace) */
	);
#endif /* ! __cplusplus */

