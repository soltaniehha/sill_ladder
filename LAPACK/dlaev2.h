#ifdef __cplusplus
extern "C" void dlaev2_(
	const double &a,		// (input)
	const double &b,		// (input)
	const double &c,		// (input)
	double &rt1,			// (output)
	double &rt2,			// (output)
	double &cs1,			// (output)
	double &sn1			// (output)
	);
#else /* ! __cplusplus */
void dlaev2_(
	const double *a,		/* (input) */
	const double *b,		/* (input) */
	const double *c,		/* (input) */
	double *rt1,			/* (output) */
	double *rt2,			/* (output) */
	double *cs1,			/* (output) */
	double *sn1			/* (output) */
	);
#endif /* ! __cplusplus */

