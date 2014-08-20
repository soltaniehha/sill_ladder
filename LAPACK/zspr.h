#ifdef __cplusplus
extern "C" void zspr_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	const complex<double> &alpha,	// (input)
	const complex<double> *x,	// x[?] (input)
	const int &incx,		// (input)
	complex<double> *ap		// ap[?] (input/output)
	);
#else /* ! __cplusplus */
void zspr_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *alpha,	/* (input) */
	const complex_double *x,	/* x[?] (input) */
	const int *incx,		/* (input) */
	complex_double *ap		/* ap[?] (input/output) */
	);
#endif /* ! __cplusplus */

