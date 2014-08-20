#ifdef __cplusplus
extern "C" void clacgv_(
	const int &n,			// (input)
	complex<float> *x,		// x[?] (input/output)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void clacgv_(
	const int *n,			/* (input) */
	complex_float *x,		/* x[?] (input/output) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

