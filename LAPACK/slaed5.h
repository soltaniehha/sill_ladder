#ifdef __cplusplus
extern "C" void slaed5_(
	const int &i,			// (input)
	const float *d,			// d[2] (input)
	const float *z,			// z[2] (input)
	float *delta,			// delta[2] (output)
	const float &rho,		// (input)
	float &dlam			// (output)
	);
#else /* ! __cplusplus */
void slaed5_(
	const int *i,			/* (input) */
	const float *d,			/* d[2] (input) */
	const float *z,			/* z[2] (input) */
	float *delta,			/* delta[2] (output) */
	const float *rho,		/* (input) */
	float *dlam			/* (output) */
	);
#endif /* ! __cplusplus */

