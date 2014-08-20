#ifdef __cplusplus
extern "C" void slags2_(
	const int &upper,		// (input)
	const float &a1,		// (input)
	const float &a2,		// (input)
	const float &a3,		// (input)
	const float &b1,		// (input)
	const float &b2,		// (input)
	const float &b3,		// (input)
	float &csu,			// (output)
	float &snu,			// (output)
	float &csv,			// (output)
	float &snv,			// (output)
	float &csq,			// (output)
	float &snq			// (output)
	);
#else /* ! __cplusplus */
void slags2_(
	const int *upper,		/* (input) */
	const float *a1,		/* (input) */
	const float *a2,		/* (input) */
	const float *a3,		/* (input) */
	const float *b1,		/* (input) */
	const float *b2,		/* (input) */
	const float *b3,		/* (input) */
	float *csu,			/* (output) */
	float *snu,			/* (output) */
	float *csv,			/* (output) */
	float *snv,			/* (output) */
	float *csq,			/* (output) */
	float *snq			/* (output) */
	);
#endif /* ! __cplusplus */

