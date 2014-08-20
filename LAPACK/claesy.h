#ifdef __cplusplus
extern "C" void claesy_(
	const complex<float> &a,	// (input)
	const complex<float> &b,	// (input)
	const complex<float> &c,	// (input)
	complex<float> &rt1,		// (output)
	complex<float> &rt2,		// (output)
	complex<float> &evscal,		// (output)
	complex<float> &cs1,		// (output)
	complex<float> &sn1		// (output)
	);
#else /* ! __cplusplus */
void claesy_(
	const complex_float *a,		/* (input) */
	const complex_float *b,		/* (input) */
	const complex_float *c,		/* (input) */
	complex_float *rt1,		/* (output) */
	complex_float *rt2,		/* (output) */
	complex_float *evscal,		/* (output) */
	complex_float *cs1,		/* (output) */
	complex_float *sn1		/* (output) */
	);
#endif /* ! __cplusplus */

