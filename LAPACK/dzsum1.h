#ifdef __cplusplus
extern "C" double dzsum1_(
	const int &n,			// (input)
	const complex<double> *cx,	// cx[n] (input)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
double dzsum1_(
	const int *n,			/* (input) */
	const complex_double *cx,	/* cx[n] (input) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

