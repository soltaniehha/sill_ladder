#ifdef __cplusplus
extern "C" void cungbr_(
	const char &vect,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const int &k,			// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const complex<float> *tau,	// tau[?] (input)
	complex<float> *work,		// work[lwork] (workspace/output)
	const int &lwork,		// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cungbr_(
	const char *vect,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const int *k,			/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const complex_float *tau,	/* tau[?] (input) */
	complex_float *work,		/* work[lwork] (workspace/output) */
	const int *lwork,		/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

