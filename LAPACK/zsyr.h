#ifdef __cplusplus
extern "C" void zsyr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> &alpha,	// (input)
	const complex<double> *x,	// x[?] (input)
	const int &incx,		// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void zsyr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *alpha,	/* (input) */
	const complex_double *x,	/* x[?] (input) */
	const int *incx,		/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

