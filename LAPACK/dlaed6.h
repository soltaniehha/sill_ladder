#ifdef __cplusplus
extern "C" void dlaed6_(
	const int &kniter,		// (input)
	const int &orgati,		// (input)
	const double &rho,		// (input)
	const double *d,		// d[3] (input)
	const double *z,		// z[3] (input)
	const double &finit,		// (input)
	double &tau,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlaed6_(
	const int *kniter,		/* (input) */
	const int *orgati,		/* (input) */
	const double *rho,		/* (input) */
	const double *d,		/* d[3] (input) */
	const double *z,		/* z[3] (input) */
	const double *finit,		/* (input) */
	double *tau,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

