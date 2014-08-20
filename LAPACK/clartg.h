#ifdef __cplusplus
extern "C" void clartg_(
	const complex<float> &f,	// (input)
	const complex<float> &g,	// (input)
	float &cs,			// (output)
	complex<float> &sn,		// (output)
	complex<float> &r		// (output)
	);
#else /* ! __cplusplus */
void clartg_(
	const complex_float *f,		/* (input) */
	const complex_float *g,		/* (input) */
	float *cs,			/* (output) */
	complex_float *sn,		/* (output) */
	complex_float *r		/* (output) */
	);
#endif /* ! __cplusplus */

