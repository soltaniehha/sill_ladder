#ifdef __cplusplus
extern "C" void dlartg_(
	const double &f,		// (input)
	const double &g,		// (input)
	double &cs,			// (output)
	double &sn,			// (output)
	double &r			// (output)
	);
#else /* ! __cplusplus */
void dlartg_(
	const double *f,		/* (input) */
	const double *g,		/* (input) */
	double *cs,			/* (output) */
	double *sn,			/* (output) */
	double *r			/* (output) */
	);
#endif /* ! __cplusplus */

