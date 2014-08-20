#ifdef __cplusplus
extern "C" void csrscl_(
	const int &n,			// (input)
	const float &sa,		// (input)
	complex<float> *sx,		// sx[?] (input/output)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void csrscl_(
	const int *n,			/* (input) */
	const float *sa,		/* (input) */
	complex_float *sx,		/* sx[?] (input/output) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

