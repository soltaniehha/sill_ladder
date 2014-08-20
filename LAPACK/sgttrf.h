#ifdef __cplusplus
extern "C" void sgttrf_(
	const int &n,			// (input)
	float *dl,			// dl[n-1] (input/output)
	float *d,			// d[n] (input/output)
	float *du,			// du[n-1] (input/output)
	float *du2,			// du2[n-2] (output)
	int *ipiv,			// ipiv[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgttrf_(
	const int *n,			/* (input) */
	float *dl,			/* dl[n-1] (input/output) */
	float *d,			/* d[n] (input/output) */
	float *du,			/* du[n-1] (input/output) */
	float *du2,			/* du2[n-2] (output) */
	int *ipiv,			/* ipiv[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

