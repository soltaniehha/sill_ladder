#ifdef __cplusplus
extern "C" void cupmtr_(
	const char &side,		// (input)
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> *ap,	// ap[?] (input)
	const complex<float> *tau,	// tau[?] (input)
	complex<float> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work,		// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cupmtr_(
	const char *side,		/* (input) */
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *ap,	/* ap[?] (input) */
	const complex_float *tau,	/* tau[?] (input) */
	complex_float *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work,		/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

