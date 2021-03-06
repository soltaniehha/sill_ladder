#ifdef __cplusplus
extern "C" void cunmbr_(
	const char &vect,		// (input)
	const char &side,		// (input)
	const char &trans,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	const complex<float> *a,	// a[?][lda] (input)
	const int &lda,			// (input)
	const complex<float> *tau,	// tau[min(nq,k)] (input)
	complex<float> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cunmbr_(
	const char *vect,		/* (input) */
	const char *side,		/* (input) */
	const char *trans,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	const complex_float *a,		/* a[?][lda] (input) */
	const int *lda,			/* (input) */
	const complex_float *tau,	/* tau[min(nq,k)] (input) */
	complex_float *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

