#ifdef __cplusplus
extern "C" void slaev2_(
	const float &a,			// (input)
	const float &b,			// (input)
	const float &c,			// (input)
	float &rt1,			// (output)
	float &rt2,			// (output)
	float &cs1,			// (output)
	float &sn1			// (output)
	);
#else /* ! __cplusplus */
void slaev2_(
	const float *a,			/* (input) */
	const float *b,			/* (input) */
	const float *c,			/* (input) */
	float *rt1,			/* (output) */
	float *rt2,			/* (output) */
	float *cs1,			/* (output) */
	float *sn1			/* (output) */
	);
#endif /* ! __cplusplus */

