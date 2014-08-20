#ifdef __cplusplus
extern "C" void slanv2_(
	float &a,			// (input/output)
	float &b,			// (input/output)
	float &c,			// (input/output)
	float &d,			// (input/output)
	float &rt1r,			// (output)
	float &rt1i,			// (output)
	float &rt2r,			// (output)
	float &rt2i,			// (output)
	float &cs,			// (output)
	float &sn			// (output)
	);
#else /* ! __cplusplus */
void slanv2_(
	float *a,			/* (input/output) */
	float *b,			/* (input/output) */
	float *c,			/* (input/output) */
	float *d,			/* (input/output) */
	float *rt1r,			/* (output) */
	float *rt1i,			/* (output) */
	float *rt2r,			/* (output) */
	float *rt2i,			/* (output) */
	float *cs,			/* (output) */
	float *sn			/* (output) */
	);
#endif /* ! __cplusplus */

