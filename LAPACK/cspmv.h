#ifdef __cplusplus
extern "C" void cspmv_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> &alpha,	// (input)
	const complex<float> *ap,	// ap[?] (input)
	const complex<float> *x,	// x[?] (input)
	const int &incx,		// (input)
	const complex<float> &beta,	// (input)
	complex<float> *y,		// y[?] (input/output)
	const int &incy			// (input)
	);
#else /* ! __cplusplus */
void cspmv_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *alpha,	/* (input) */
	const complex_float *ap,	/* ap[?] (input) */
	const complex_float *x,		/* x[?] (input) */
	const int *incx,		/* (input) */
	const complex_float *beta,	/* (input) */
	complex_float *y,		/* y[?] (input/output) */
	const int *incy			/* (input) */
	);
#endif /* ! __cplusplus */

