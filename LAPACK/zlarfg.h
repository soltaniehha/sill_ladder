#ifdef __cplusplus
extern "C" void zlarfg_(
	const int &n,			// (input)
	complex<double> &alpha,		// (input/output)
	complex<double> *x,		// x[?] (input/output)
	const int &incx,		// (input)
	complex<double> &tau		// (output)
	);
#else /* ! __cplusplus */
void zlarfg_(
	const int *n,			/* (input) */
	complex_double *alpha,		/* (input/output) */
	complex_double *x,		/* x[?] (input/output) */
	const int *incx,		/* (input) */
	complex_double *tau		/* (output) */
	);
#endif /* ! __cplusplus */

