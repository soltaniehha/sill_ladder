#ifdef __cplusplus
extern "C" void cgttrs_(
	const char &trans,		// (input)
	const int &n,			// (input)
	const int &nrhs,		// (input)
	const complex<float> *dl,	// dl[n-1] (input)
	const complex<float> *d,	// d[n] (input)
	const complex<float> *du,	// du[n-1] (input)
	const complex<float> *du2,	// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	complex<float> *b,		// b[nrhs][ldb] (input/output)
	const int &ldb,			// (input)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgttrs_(
	const char *trans,		/* (input) */
	const int *n,			/* (input) */
	const int *nrhs,		/* (input) */
	const complex_float *dl,	/* dl[n-1] (input) */
	const complex_float *d,		/* d[n] (input) */
	const complex_float *du,	/* du[n-1] (input) */
	const complex_float *du2,	/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	complex_float *b,		/* b[nrhs][ldb] (input/output) */
	const int *ldb,			/* (input) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

