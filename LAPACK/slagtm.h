#ifdef __cplusplus
extern "C" void slagtm_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float &alpha,		// (input)
	const float *dl,		// dl[n-1] (input)
	const float *d,			// d[n] (input)
	const float *du,		// du[n-1] (input)
	const float *x,			// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	const float &beta,		// (input)
	float *b,			// b[nrhs][ldb] (input/output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void slagtm_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *alpha,		/* (input) */
	const float *dl,		/* dl[n-1] (input) */
	const float *d,			/* d[n] (input) */
	const float *du,		/* du[n-1] (input) */
	const float *x,			/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	const float *beta,		/* (input) */
	float *b,			/* b[nrhs][ldb] (input/output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

