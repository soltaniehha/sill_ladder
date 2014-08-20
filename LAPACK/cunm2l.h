#ifdef __cplusplus
extern "C" void cunm2l_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<float> *a,	// a[k][lda] (input)
	const int &lda,			// (input)
	const complex<float> *tau,	// tau[k] (input)
	complex<float> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work,		// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cunm2l_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_float *a,		/* a[k][lda] (input) */
	const int *lda,			/* (input) */
	const complex_float *tau,	/* tau[k] (input) */
	complex_float *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work,		/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

