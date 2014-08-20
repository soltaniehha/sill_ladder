#ifdef __cplusplus
extern "C" void sgttrs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float *dl,		// dl[n-1] (input)
	const float *d,			// d[n] (input)
	const float *du,		// du[n-1] (input)
	const float *du2,		// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void sgttrs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *dl,		/* dl[n-1] (input) */
	const float *d,			/* d[n] (input) */
	const float *du,		/* du[n-1] (input) */
	const float *du2,		/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

