#ifdef __cplusplus
extern "C" void clacrt_(
	const int &n,			// (input)
	complex<float> *cx,		// cx[n] (input/output)
	const int &incx,		// (input)
	complex<float> *cy,		// cy[n] (input/output)
	const int &incy,		// (input)
	const complex<float> &c,	// (input)
	const complex<float> &s		// (input)
	);
#else /* ! __cplusplus */
void clacrt_(
	const int *n,			/* (input) */
	complex_float *cx,		/* cx[n] (input/output) */
	const int *incx,		/* (input) */
	complex_float *cy,		/* cy[n] (input/output) */
	const int *incy,		/* (input) */
	const complex_float *c,		/* (input) */
	const complex_float *s		/* (input) */
	);
#endif /* ! __cplusplus */

