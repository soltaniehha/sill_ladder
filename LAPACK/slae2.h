#ifdef __cplusplus
extern "C" void slae2_(
	const float &a,			// (input)
	const float &b,			// (input)
	const float &c,			// (input)
	float &rt1,			// (output)
	float &rt2			// (output)
	);
#else /* ! __cplusplus */
void slae2_(
	const float *a,			/* (input) */
	const float *b,			/* (input) */
	const float *c,			/* (input) */
	float *rt1,			/* (output) */
	float *rt2			/* (output) */
	);
#endif /* ! __cplusplus */

