#ifdef __cplusplus
extern "C" void clagtm_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const float &alpha,		// (input)
	const complex<float> *dl,	// dl[n-1] (input)
	const complex<float> *d,	// d[n] (input)
	const complex<float> *du,	// du[n-1] (input)
	const complex<float> *x,	// x[nrhs][ldx] (input)
	const int &ldx,			// (input)
	const float &beta,		// (input)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb			// (input)
	);
#else /* ! __cplusplus */
void clagtm_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const float *alpha,		/* (input) */
	const complex_float *dl,	/* dl[n-1] (input) */
	const complex_float *d,		/* d[n] (input) */
	const complex_float *du,	/* du[n-1] (input) */
	const complex_float *x,		/* x[nrhs][ldx] (input) */
	const int *ldx,			/* (input) */
	const float *beta,		/* (input) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb			/* (input) */
	);
#endif /* ! __cplusplus */

