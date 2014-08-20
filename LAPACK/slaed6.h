#ifdef __cplusplus
extern "C" void slaed6_(
	const int &kniter,		// (input)
	const int &orgati,		// (input)
	const float &rho,		// (input)
	const float *d,			// d[3] (input)
	const float *z,			// z[3] (input)
	const float &finit,		// (input)
	float &tau,			// (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slaed6_(
	const int *kniter,		/* (input) */
	const int *orgati,		/* (input) */
	const float *rho,		/* (input) */
	const float *d,			/* d[3] (input) */
	const float *z,			/* z[3] (input) */
	const float *finit,		/* (input) */
	float *tau,			/* (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

