#ifdef __cplusplus
extern "C" void zdrscl_(
	const int &n,			// (input)
	const double &sa,		// (input)
	complex<double> *sx,		// sx[?] (input/output)
	const int &incx			// (input)
	);
#else /* ! __cplusplus */
void zdrscl_(
	const int *n,			/* (input) */
	const double *sa,		/* (input) */
	complex_double *sx,		/* sx[?] (input/output) */
	const int *incx			/* (input) */
	);
#endif /* ! __cplusplus */

