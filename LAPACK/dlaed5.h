#ifdef __cplusplus
extern "C" void dlaed5_(
	const int &i,			// (input)
	const double *d,		// d[2] (input)
	const double *z,		// z[2] (input)
	double *delta,			// delta[2] (output)
	const double &rho,		// (input)
	double &dlam			// (output)
	);
#else /* ! __cplusplus */
void dlaed5_(
	const int *i,			/* (input) */
	const double *d,		/* d[2] (input) */
	const double *z,		/* z[2] (input) */
	double *delta,			/* delta[2] (output) */
	const double *rho,		/* (input) */
	double *dlam			/* (output) */
	);
#endif /* ! __cplusplus */

