#ifdef __cplusplus
extern "C" void clags2_(
	const int &upper,		// (input)
	const float &a1,		// (input)
	const complex<float> &a2,	// (input)
	const float &a3,		// (input)
	const float &b1,		// (input)
	const complex<float> &b2,	// (input)
	const float &b3,		// (input)
	float &csu,			// (output)
	complex<float> &snu,		// (output)
	float &csv,			// (output)
	complex<float> &snv,		// (output)
	float &csq,			// (output)
	complex<float> &snq		// (output)
	);
#else /* ! __cplusplus */
void clags2_(
	const int *upper,		/* (input) */
	const float *a1,		/* (input) */
	const complex_float *a2,	/* (input) */
	const float *a3,		/* (input) */
	const float *b1,		/* (input) */
	const complex_float *b2,	/* (input) */
	const float *b3,		/* (input) */
	float *csu,			/* (output) */
	complex_float *snu,		/* (output) */
	float *csv,			/* (output) */
	complex_float *snv,		/* (output) */
	float *csq,			/* (output) */
	complex_float *snq		/* (output) */
	);
#endif /* ! __cplusplus */

