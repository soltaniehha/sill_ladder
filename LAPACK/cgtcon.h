#ifdef __cplusplus
extern "C" void cgtcon_(
	const char &norm,		// (input)
	const int &n,			// (input)
	const complex<float> *dl,	// dl[n-1] (input)
	const complex<float> *d,	// d[n] (input)
	const complex<float> *du,	// du[n-1] (input)
	const complex<float> *du2,	// du2[n-2] (input)
	const int *ipiv,		// ipiv[n] (input)
	const float &anorm,		// (input)
	float &rcond,			// (output)
	complex<float> *work,		// work[2*n] (workspace)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void cgtcon_(
	const char *norm,		/* (input) */
	const int *n,			/* (input) */
	const complex_float *dl,	/* dl[n-1] (input) */
	const complex_float *d,		/* d[n] (input) */
	const complex_float *du,	/* du[n-1] (input) */
	const complex_float *du2,	/* du2[n-2] (input) */
	const int *ipiv,		/* ipiv[n] (input) */
	const float *anorm,		/* (input) */
	float *rcond,			/* (output) */
	complex_float *work,		/* work[2*n] (workspace) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

