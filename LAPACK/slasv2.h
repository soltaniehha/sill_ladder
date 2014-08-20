#ifdef __cplusplus
extern "C" void slasv2_(
	const float &f,			// (input)
	const float &g,			// (input)
	const float &h,			// (input)
	float &ssmin,			// (output)
	float &ssmax,			// (output)
	float &snr,			// (output)
	float &csr,			// (output)
	float &snl,			// (output)
	float &csl			// (output)
	);
#else /* ! __cplusplus */
void slasv2_(
	const float *f,			/* (input) */
	const float *g,			/* (input) */
	const float *h,			/* (input) */
	float *ssmin,			/* (output) */
	float *ssmax,			/* (output) */
	float *snr,			/* (output) */
	float *csr,			/* (output) */
	float *snl,			/* (output) */
	float *csl			/* (output) */
	);
#endif /* ! __cplusplus */

