#ifdef __cplusplus
extern "C" void cspr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<float> &alpha,	// (input)
	const complex<float> *x,	// x[?] (input)
	const int &incx,		// (input)
	complex<float> *ap		// ap[?] (input/output)
	);
#else /* ! __cplusplus */
void cspr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *alpha,	/* (input) */
	const complex_float *x,		/* x[?] (input) */
	const int *incx,		/* (input) */
	complex_float *ap		/* ap[?] (input/output) */
	);
#endif /* ! __cplusplus */

