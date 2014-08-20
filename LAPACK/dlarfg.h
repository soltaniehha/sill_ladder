#ifdef __cplusplus
extern "C" void dlarfg_(
	const int &n,			// (input)
	double &alpha,			// (input/output)
	double *x,			// x[?] (input/output)
	const int &incx,		// (input)
	double &tau			// (output)
	);
#else /* ! __cplusplus */
void dlarfg_(
	const int *n,			/* (input) */
	double *alpha,			/* (input/output) */
	double *x,			/* x[?] (input/output) */
	const int *incx,		/* (input) */
	double *tau			/* (output) */
	);
#endif /* ! __cplusplus */

