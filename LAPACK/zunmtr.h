#ifdef __cplusplus
extern "C" void zunmtr_(
	const char &side,		// (input)
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> *a,	// a[?][lda] (input)
	const int &lda,			// (input)
	const complex<double> *tau,	// tau[?] (input)
	complex<double> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<double> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zunmtr_(
	const char *side,		/* (input) */
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *a,	/* a[?][lda] (input) */
	const int *lda,			/* (input) */
	const complex_double *tau,	/* tau[?] (input) */
	complex_double *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_double *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

