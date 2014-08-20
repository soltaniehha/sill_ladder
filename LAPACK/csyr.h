#ifdef __cplusplus
extern "C" void csyr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> &alpha,	// (input)
	const complex<float> *x,	// x[?] (input)
	const int &incx,		// (input)
	complex<float> *a,		// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void csyr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *alpha,	/* (input) */
	const complex_float *x,		/* x[?] (input) */
	const int *incx,		/* (input) */
	complex_float *a,		/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

