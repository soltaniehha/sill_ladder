#ifdef __cplusplus
extern "C" void clarfg_(
	const int &n,			// (input)
	complex<float> &alpha,		// (input/output)
	complex<float> *x,		// x[?] (input/output)
	const int &incx,		// (input)
	complex<float> &tau		// (output)
	);
#else /* ! __cplusplus */
void clarfg_(
	const int *n,			/* (input) */
	complex_float *alpha,		/* (input/output) */
	complex_float *x,		/* x[?] (input/output) */
	const int *incx,		/* (input) */
	complex_float *tau		/* (output) */
	);
#endif /* ! __cplusplus */

