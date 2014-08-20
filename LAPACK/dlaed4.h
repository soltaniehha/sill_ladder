#ifdef __cplusplus
extern "C" void dlaed4_(
	const int &n,			// (input)
	const int &i,			// (input)
	const double *d,		// d[n] (input)
	const double *z,		// z[n] (input)
	double *delta,			// delta[n] (output)
	const double &rho,		// (input)
	double &dlam,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed4_(
	const int *n,			/* (input) */
	const int *i,			/* (input) */
	const double *d,		/* d[n] (input) */
	const double *z,		/* z[n] (input) */
	double *delta,			/* delta[n] (output) */
	const double *rho,		/* (input) */
	double *dlam,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

