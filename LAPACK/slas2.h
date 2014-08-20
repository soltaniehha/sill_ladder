#ifdef __cplusplus
extern "C" void slas2_(
	const float &f,			// (input)
	const float &g,			// (input)
	const float &h,			// (input)
	float &ssmin,			// (output)
	float &ssmax			// (output)
	);
#else /* ! __cplusplus */
void slas2_(
	const float *f,			/* (input) */
	const float *g,			/* (input) */
	const float *h,			/* (input) */
	float *ssmin,			/* (output) */
	float *ssmax			/* (output) */
	);
#endif /* ! __cplusplus */

