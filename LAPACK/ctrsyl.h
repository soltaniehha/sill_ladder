#ifdef __cplusplus
extern "C" void ctrsyl_(
	const char &trana,		// (input)
	const char &tranb,		// (input)
	const int &isgn,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> *a,	// a[m][lda] (input)
	const int &lda,			// (input)
	const complex<float> *b,	// b[n][ldb] (input)
	const int &ldb,			// (input)
	complex<float> *c,		// c[n][ldc] (input/output)
	const int &ldc,			// (input)
	float &scale,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void ctrsyl_(
	const char *trana,		/* (input) */
	const char *tranb,		/* (input) */
	const int *isgn,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *a,		/* a[m][lda] (input) */
	const int *lda,			/* (input) */
	const complex_float *b,		/* b[n][ldb] (input) */
	const int *ldb,			/* (input) */
	complex_float *c,		/* c[n][ldc] (input/output) */
	const int *ldc,			/* (input) */
	float *scale,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

