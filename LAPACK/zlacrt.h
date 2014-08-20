#ifdef __cplusplus
extern "C" void zlacrt_(
	const int &n,			// (input)
	complex<double> *cx,		// cx[n] (input/output)
	const int &incx,		// (input)
	complex<double> *cy,		// cy[n] (input/output)
	const int &incy,		// (input)
	const complex<double> &c,	// (input)
	const complex<double> &s	// (input)
	);
#else /* ! __cplusplus */
void zlacrt_(
	const int *n,			/* (input) */
	complex_double *cx,		/* cx[n] (input/output) */
	const int *incx,		/* (input) */
	complex_double *cy,		/* cy[n] (input/output) */
	const int *incy,		/* (input) */
	const complex_double *c,	/* (input) */
	const complex_double *s		/* (input) */
	);
#endif /* ! __cplusplus */

