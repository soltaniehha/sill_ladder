#ifdef __cplusplus
extern "C" void drscl_(
	const int &n,			// (input)
	const double &sa,		// (input)
	double *sx,			// sx[?] (input/output)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void drscl_(
	const int *n,			/* (input) */
	const double *sa,		/* (input) */
	double *sx,			/* sx[?] (input/output) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

