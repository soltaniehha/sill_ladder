#ifdef __cplusplus
extern "C" void claic1_(
	const int &job,			// (input)
	const int &j,			// (input)
	const complex<float> *x,	// x[j] (input)
	const float &sest,		// (input)
	const complex<float> *w,	// w[j] (input)
	const complex<float> &gamma,	// (input)
	float &sestpr,			// (output)
	complex<float> &s,		// (output)
	complex<float> &c		// (output)
	);
#else /* ! __cplusplus */
void claic1_(
	const int *job,			/* (input) */
	const int *j,			/* (input) */
	const complex_float *x,		/* x[j] (input) */
	const float *sest,		/* (input) */
	const complex_float *w,		/* w[j] (input) */
	const complex_float *gamma,	/* (input) */
	float *sestpr,			/* (output) */
	complex_float *s,		/* (output) */
	complex_float *c		/* (output) */
	);
#endif /* ! __cplusplus */

