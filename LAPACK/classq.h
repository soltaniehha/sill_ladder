#ifdef __cplusplus
extern "C" void classq_(
	const int &n,			// (input)
	const complex<float> *x,	// x[?] (input)
	const int &incx,		// (input)
	float &scale,			// (input/output)
	float &sumsq			// (input/output)
	);
#else /* ! __cplusplus */
void classq_(
	const int *n,			/* (input) */
	const complex_float *x,		/* x[?] (input) */
	const int *incx,		/* (input) */
	float *scale,			/* (input/output) */
	float *sumsq			/* (input/output) */
	);
#endif /* ! __cplusplus */

