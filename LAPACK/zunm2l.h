#ifdef __cplusplus
extern "C" void zunm2l_(
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<double> *a,	// a[k][lda] (input)
	const int &lda,			// (input)
	const complex<double> *tau,	// tau[k] (input)
	complex<double> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work,		// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zunm2l_(
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_double *a,	/* a[k][lda] (input) */
	const int *lda,			/* (input) */
	const complex_double *tau,	/* tau[k] (input) */
	complex_double *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work,		/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

