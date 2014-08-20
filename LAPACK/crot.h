#ifdef __cplusplus
extern "C" void crot_(
	const int &n,			// (input)
	complex<float> *cx,		// cx[n] (input/output)
	const int &incx,		// (input)
	complex<float> *cy,		// cy[n] (input/output)
	const int &incy,		// (input)
	const float &c,			// (input)
	const complex<float> &s		// (input)
	);
#else /* ! __cplusplus */
void crot_(
	const int *n,			/* (input) */
	complex_float *cx,		/* cx[n] (input/output) */
	const int *incx,		/* (input) */
	complex_float *cy,		/* cy[n] (input/output) */
	const int *incy,		/* (input) */
	const float *c,			/* (input) */
	const complex_float *s		/* (input) */
	);
#endif /* ! __cplusplus */

