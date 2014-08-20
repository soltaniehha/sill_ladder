#ifdef __cplusplus
extern "C" void dlanv2_(
	double &a,			// (input/output)
	double &b,			// (input/output)
	double &c,			// (input/output)
	double &d,			// (input/output)
	double &rt1r,			// (output)
	double &rt1i,			// (output)
	double &rt2r,			// (output)
	double &rt2i,			// (output)
	double &cs,			// (output)
	double &sn			// (output)
	);
#else /* ! __cplusplus */
void dlanv2_(
	double *a,			/* (input/output) */
	double *b,			/* (input/output) */
	double *c,			/* (input/output) */
	double *d,			/* (input/output) */
	double *rt1r,			/* (output) */
	double *rt1i,			/* (output) */
	double *rt2r,			/* (output) */
	double *rt2i,			/* (output) */
	double *cs,			/* (output) */
	double *sn			/* (output) */
	);
#endif /* ! __cplusplus */

