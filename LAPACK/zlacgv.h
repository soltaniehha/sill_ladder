#ifdef __cplusplus
extern "C" void zlacgv_(
	const int &n,			// (input)
	complex<double> *x,		// x[?] (input/output)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void zlacgv_(
	const int *n,			/* (input) */
	complex_double *x,		/* x[?] (input/output) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

