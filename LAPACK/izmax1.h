#ifdef __cplusplus
extern "C" int izmax1_(
	const int &n,			// (input)
	const complex<double> *cx,	// cx[n] (input)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
int izmax1_(
	const int *n,			/* (input) */
	const complex_double *cx,	/* cx[n] (input) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

