#ifdef __cplusplus
extern "C" void slagts_(
	const int &job,			// (input)
	const int &n,			// (input)
	const float *a,			// a[n] (input)
	const float *b,			// b[n-1] (input)
	const float *c,			// c[n-1] (input)
	const float *d,			// d[n-2] (input)
	const int *in,			// in[n] (input)
	float *y,			// y[n] (input/output)
	float &tol,			// (input/output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slagts_(
	const int *job,			/* (input) */
	const int *n,			/* (input) */
	const float *a,			/* a[n] (input) */
	const float *b,			/* b[n-1] (input) */
	const float *c,			/* c[n-1] (input) */
	const float *d,			/* d[n-2] (input) */
	const int *in,			/* in[n] (input) */
	float *y,			/* y[n] (input/output) */
	float *tol,			/* (input/output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

