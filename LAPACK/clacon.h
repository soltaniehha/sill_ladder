#ifdef __cplusplus
extern "C" void clacon_(
	const int &n,			// (input)
	complex<float> *v,		// v[n] (workspace)
	complex<float> *x,		// x[n] (input/output)
	float &est,			// (output)
	int &kase			// (input/output)
	);
#else /* ! __cplusplus */
void clacon_(
	const int *n,			/* (input) */
	complex_float *v,		/* v[n] (workspace) */
	complex_float *x,		/* x[n] (input/output) */
	float *est,			/* (output) */
	int *kase			/* (input/output) */
	);
#endif /* ! __cplusplus */

