#ifdef __cplusplus
extern "C" void zlaesy_(
	const complex<double> &a,	// (input)
	const complex<double> &b,	// (input)
	const complex<double> &c,	// (input)
	complex<double> &rt1,		// (output)
	complex<double> &rt2,		// (output)
	complex<double> &evscal,	// (output)
	complex<double> &cs1,		// (output)
	complex<double> &sn1		// (output)
	);
#else /* ! __cplusplus */
void zlaesy_(
	const complex_double *a,	/* (input) */
	const complex_double *b,	/* (input) */
	const complex_double *c,	/* (input) */
	complex_double *rt1,		/* (output) */
	complex_double *rt2,		/* (output) */
	complex_double *evscal,		/* (output) */
	complex_double *cs1,		/* (output) */
	complex_double *sn1		/* (output) */
	);
#endif /* ! __cplusplus */

