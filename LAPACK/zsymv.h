#ifdef __cplusplus
extern "C" void zsymv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> &alpha,	// (input)
	const complex<double> *a,	// a[n][lda] (input)
	const int &lda,			// (input)
	const complex<double> *x,	// x[?] (input)
	const int &incx,		// (input)
	const complex<double> &beta,	// (input)
	complex<double> *y,		// y[?] (input/output)
	const int &incy			// (input)
	);
#else /* ! __cplusplus */
void zsymv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *alpha,	/* (input) */
	const complex_double *a,	/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	const complex_double *x,	/* x[?] (input) */
	const int *incx,		/* (input) */
	const complex_double *beta,	/* (input) */
	complex_double *y,		/* y[?] (input/output) */
	const int *incy			/* (input) */
	);
#endif /* ! __cplusplus */

