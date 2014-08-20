#ifdef __cplusplus
extern "C" void slaed4_(
	const int &n,			// (input)
	const int &i,			// (input)
	const float *d,			// d[n] (input)
	const float *z,			// z[n] (input)
	float *delta,			// delta[n] (output)
	const float &rho,		// (input)
	float &dlam,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed4_(
	const int *n,			/* (input) */
	const int *i,			/* (input) */
	const float *d,			/* d[n] (input) */
	const float *z,			/* z[n] (input) */
	float *delta,			/* delta[n] (output) */
	const float *rho,		/* (input) */
	float *dlam,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

