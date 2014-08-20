#ifdef __cplusplus
extern "C" void dgttrf_(
	const int &n,			// (input)
	double *dl,			// dl[n-1] (input/output)
	double *d,			// d[n] (input/output)
	double *du,			// du[n-1] (input/output)
	double *du2,			// du2[n-2] (output)
	int *ipiv,			// ipiv[n] (output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dgttrf_(
	const int *n,			/* (input) */
	double *dl,			/* dl[n-1] (input/output) */
	double *d,			/* d[n] (input/output) */
	double *du,			/* du[n-1] (input/output) */
	double *du2,			/* du2[n-2] (output) */
	int *ipiv,			/* ipiv[n] (output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

