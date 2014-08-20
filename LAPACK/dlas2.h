#ifdef __cplusplus
extern "C" void dlas2_(
	const double &f,		// (input)
	const double &g,		// (input)
	const double &h,		// (input)
	double &ssmin,			// (output)
	double &ssmax			// (output)
	);
#else /* ! __cplusplus */
void dlas2_(
	const double *f,		/* (input) */
	const double *g,		/* (input) */
	const double *h,		/* (input) */
	double *ssmin,			/* (output) */
	double *ssmax			/* (output) */
	);
#endif /* ! __cplusplus */

