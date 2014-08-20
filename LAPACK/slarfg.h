#ifdef __cplusplus
extern "C" void slarfg_(
	const int &n,			// (input)
	float &alpha,			// (input/output)
	float *x,			// x[?] (input/output)
	const int &incx,		// (input)
	float &tau			// (output)
	);
#else /* ! __cplusplus */
void slarfg_(
	const int *n,			/* (input) */
	float *alpha,			/* (input/output) */
	float *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	float *tau			/* (output) */
	);
#endif /* ! __cplusplus */

