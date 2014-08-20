#ifdef __cplusplus
extern "C" int icmax1_(
	const int &n,			// (input)
	const complex<float> *cx,	// cx[n] (input)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
int icmax1_(
	const int *n,			/* (input) */
	const complex_float *cx,	/* cx[n] (input) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

