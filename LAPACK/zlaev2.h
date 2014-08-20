#ifdef __cplusplus
extern "C" void zlaev2_(
	const complex<double> &a,	// (input)
	const complex<double> &b,	// (input)
	const complex<double> &c,	// (input)
	double &rt1,			// (output)
	double &rt2,			// (output)
	double &cs1,			// (output)
	complex<double> &sn1		// (output)
	);
#else /* ! __cplusplus */
void zlaev2_(
	const complex_double *a,	/* (input) */
	const complex_double *b,	/* (input) */
	const complex_double *c,	/* (input) */
	double *rt1,			/* (output) */
	double *rt2,			/* (output) */
	double *cs1,			/* (output) */
	complex_double *sn1		/* (output) */
	);
#endif /* ! __cplusplus */

