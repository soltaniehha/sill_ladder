#ifdef __cplusplus
extern "C" void claset_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<float> &alpha,	// (input)
	const complex<float> &beta,	// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void claset_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_float *alpha,	/* (input) */
	const complex_float *beta,	/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

