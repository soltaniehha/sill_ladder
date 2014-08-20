#ifdef __cplusplus
extern "C" void slassq_(
	const int &n,			// (input)
	const float *x,			// x[?] (input)
	const int &incx,		// (input)
	float &scale,			// (input/output)
	float &sumsq			// (input/output)
	);
#else /* ! __cplusplus */
void slassq_(
	const int *n,			/* (input) */
	const float *x,			/* x[?] (input) */
	const int *incx,		/* (input) */
	float *scale,			/* (input/output) */
	float *sumsq			/* (input/output) */
	);
#endif /* ! __cplusplus */

