#ifdef __cplusplus
extern "C" void cgttrf_(
	const int &n,			// (input)
	complex<float> *dl,		// dl[n-1] (input/output)
	complex<float> *d,		// d[n] (input/output)
	complex<float> *du,		// du[n-1] (input/output)
	complex<float> *du2,		// du2[n-2] (output)
	int *ipiv,			// ipiv[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgttrf_(
	const int *n,			/* (input) */
	complex_float *dl,		/* dl[n-1] (input/output) */
	complex_float *d,		/* d[n] (input/output) */
	complex_float *du,		/* du[n-1] (input/output) */
	complex_float *du2,		/* du2[n-2] (output) */
	int *ipiv,			/* ipiv[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

