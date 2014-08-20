#ifdef __cplusplus
extern "C" void dlae2_(
	const double &a,		// (input)
	const double &b,		// (input)
	const double &c,		// (input)
	double &rt1,			// (output)
	double &rt2			// (output)
	);
#else /* ! __cplusplus */
void dlae2_(
	const double *a,		/* (input) */
	const double *b,		/* (input) */
	const double *c,		/* (input) */
	double *rt1,			/* (output) */
	double *rt2			/* (output) */
	);
#endif /* ! __cplusplus */

