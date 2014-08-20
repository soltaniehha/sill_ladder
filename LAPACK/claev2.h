#ifdef __cplusplus
extern "C" void claev2_(
	const complex<float> &a,	// (input)
	const complex<float> &b,	// (input)
	const complex<float> &c,	// (input)
	float &rt1,			// (output)
	float &rt2,			// (output)
	float &cs1,			// (output)
	complex<float> &sn1		// (output)
	);
#else /* ! __cplusplus */
void claev2_(
	const complex_float *a,		/* (input) */
	const complex_float *b,		/* (input) */
	const complex_float *c,		/* (input) */
	float *rt1,			/* (output) */
	float *rt2,			/* (output) */
	float *cs1,			/* (output) */
	complex_float *sn1		/* (output) */
	);
#endif /* ! __cplusplus */

