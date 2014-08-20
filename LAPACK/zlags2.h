#ifdef __cplusplus
extern "C" void zlags2_(
	const int &upper,		// (input)
	const double &a1,		// (input)
	const complex<double> &a2,	// (input)
	const double &a3,		// (input)
	const double &b1,		// (input)
	const complex<double> &b2,	// (input)
	const double &b3,		// (input)
	double &csu,			// (output)
	complex<double> &snu,		// (output)
	double &csv,			// (output)
	complex<double> &snv,		// (output)
	double &csq,			// (output)
	complex<double> &snq		// (output)
	);
#else /* ! __cplusplus */
void zlags2_(
	const int *upper,		/* (input) */
	const double *a1,		/* (input) */
	const complex_double *a2,	/* (input) */
	const double *a3,		/* (input) */
	const double *b1,		/* (input) */
	const complex_double *b2,	/* (input) */
	const double *b3,		/* (input) */
	double *csu,			/* (output) */
	complex_double *snu,		/* (output) */
	double *csv,			/* (output) */
	complex_double *snv,		/* (output) */
	double *csq,			/* (output) */
	complex_double *snq		/* (output) */
	);
#endif /* ! __cplusplus */

