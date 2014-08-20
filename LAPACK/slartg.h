#ifdef __cplusplus
extern "C" void slartg_(
	const float &f,			// (input)
	const float &g,			// (input)
	float &cs,			// (output)
	float &sn,			// (output)
	float &r			// (output)
	);
#else /* ! __cplusplus */
void slartg_(
	const float *f,			/* (input) */
	const float *g,			/* (input) */
	float *cs,			/* (output) */
	float *sn,			/* (output) */
	float *r			/* (output) */
	);
#endif /* ! __cplusplus */

