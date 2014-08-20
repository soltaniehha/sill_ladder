#ifdef __cplusplus
extern "C" void zlartg_(
	const complex<double> &f,	// (input)
	const complex<double> &g,	// (input)
	double &cs,			// (output)
	complex<double> &sn,		// (output)
	complex<double> &r		// (output)
	);
#else /* ! __cplusplus */
void zlartg_(
	const complex_double *f,	/* (input) */
	const complex_double *g,	/* (input) */
	double *cs,			/* (output) */
	complex_double *sn,		/* (output) */
	complex_double *r		/* (output) */
	);
#endif /* ! __cplusplus */

