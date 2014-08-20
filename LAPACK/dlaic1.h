#ifdef __cplusplus
extern "C" void dlaic1_(
	const int &job,			// (input)
	const int &j,			// (input)
	const double *x,		// x[j] (input)
	const double &sest,		// (input)
	const double *w,		// w[j] (input)
	const double &gamma,		// (input)
	double &sestpr,			// (output)
	double &s,			// (output)
	double &c			// (output)
	);
#else /* ! __cplusplus */
void dlaic1_(
	const int *job,			/* (input) */
	const int *j,			/* (input) */
	const double *x,		/* x[j] (input) */
	const double *sest,		/* (input) */
	const double *w,		/* w[j] (input) */
	const double *gamma,		/* (input) */
	double *sestpr,			/* (output) */
	double *s,			/* (output) */
	double *c			/* (output) */
	);
#endif /* ! __cplusplus */

