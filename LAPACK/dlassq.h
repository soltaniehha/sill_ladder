#ifdef __cplusplus
extern "C" void dlassq_(
	const int &n,			// (input)
	const double *x,		// x[?] (input)
	const int &incx,		// (input)
	double &scale,			// (input/output)
	double &sumsq			// (input/output)
	);
#else /* ! __cplusplus */
void dlassq_(
	const int *n,			/* (input) */
	const double *x,		/* x[?] (input) */
	const int *incx,		/* (input) */
	double *scale,			/* (input/output) */
	double *sumsq			/* (input/output) */
	);
#endif /* ! __cplusplus */

