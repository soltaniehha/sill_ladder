#ifdef __cplusplus
extern "C" void zlassq_(
	const int &n,			// (input)
	const complex<double> *x,	// x[?] (input)
	const int &incx,		// (input)
	double &scale,			// (input/output)
	double &sumsq			// (input/output)
	);
#else /* ! __cplusplus */
void zlassq_(
	const int *n,			/* (input) */
	const complex_double *x,	/* x[?] (input) */
	const int *incx,		/* (input) */
	double *scale,			/* (input/output) */
	double *sumsq			/* (input/output) */
	);
#endif /* ! __cplusplus */

