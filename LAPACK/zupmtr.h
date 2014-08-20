#ifdef __cplusplus
extern "C" void zupmtr_(
	const char &side,		// (input)
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *ap,	// ap[?] (input)
	const complex<double> *tau,	// tau[?] (input)
	complex<double> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work,		// work[?] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zupmtr_(
	const char *side,		/* (input) */
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *ap,	/* ap[?] (input) */
	const complex_double *tau,	/* tau[?] (input) */
	complex_double *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work,		/* work[?] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

