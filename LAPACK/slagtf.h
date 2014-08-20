#ifdef __cplusplus
extern "C" void slagtf_(
	const int &n,			// (input)
	float *a,			// a[n] (input/output)
	const float &lambda,		// (input)
	float *b,			// b[n-1] (input/output)
	float *c,			// c[n-1] (input/output)
	const float &tol,		// (input)
	float *d,			// d[n-2] (output)
	int *in,			// in[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slagtf_(
	const int *n,			/* (input) */
	float *a,			/* a[n] (input/output) */
	const float *lambda,		/* (input) */
	float *b,			/* b[n-1] (input/output) */
	float *c,			/* c[n-1] (input/output) */
	const float *tol,		/* (input) */
	float *d,			/* d[n-2] (output) */
	int *in,			/* in[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

