#ifdef __cplusplus
extern "C" void zlaic1_(
	const int &job,			// (input)
	const int &j,			// (input)
	const complex<double> *x,	// x[j] (input)
	const double &sest,		// (input)
	const complex<double> *w,	// w[j] (input)
	const complex<double> &gamma,	// (input)
	double &sestpr,			// (output)
	complex<double> &s,		// (output)
	complex<double> &c		// (output)
	);
#else /* ! __cplusplus */
void zlaic1_(
	const int *job,			/* (input) */
	const int *j,			/* (input) */
	const complex_double *x,	/* x[j] (input) */
	const double *sest,		/* (input) */
	const complex_double *w,	/* w[j] (input) */
	const complex_double *gamma,	/* (input) */
	double *sestpr,			/* (output) */
	complex_double *s,		/* (output) */
	complex_double *c		/* (output) */
	);
#endif /* ! __cplusplus */

