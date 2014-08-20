#ifdef __cplusplus
extern "C" void dlasv2_(
	const double &f,		// (input)
	const double &g,		// (input)
	const double &h,		// (input)
	double &ssmin,			// (output)
	double &ssmax,			// (output)
	double &snr,			// (output)
	double &csr,			// (output)
	double &snl,			// (output)
	double &csl			// (output)
	);
#else /* ! __cplusplus */
void dlasv2_(
	const double *f,		/* (input) */
	const double *g,		/* (input) */
	const double *h,		/* (input) */
	double *ssmin,			/* (output) */
	double *ssmax,			/* (output) */
	double *snr,			/* (output) */
	double *csr,			/* (output) */
	double *snl,			/* (output) */
	double *csl			/* (output) */
	);
#endif /* ! __cplusplus */

