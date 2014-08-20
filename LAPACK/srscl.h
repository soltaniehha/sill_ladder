#ifdef __cplusplus
extern "C" void srscl_(
	const int &n,			// (input)
	const float &sa,		// (input)
	float *sx,			// sx[?] (input/output)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void srscl_(
	const int *n,			/* (input) */
	const float *sa,		/* (input) */
	float *sx,			/* sx[?] (input/output) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

