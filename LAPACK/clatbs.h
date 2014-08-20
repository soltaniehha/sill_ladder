#ifdef __cplusplus
extern "C" void clatbs_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const char &normin,		// (input)
	const int &n,			// (input)
	const int &kd,			// (input)
	const complex<float> *ab,	// ab[n][ldab] (input)
	const int &ldab,		// (input)
	complex<float> *x,		// x[n] (input/output)
	float &scale,			// (output)
	float *cnorm,			// cnorm[n] (input or output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void clatbs_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const char *normin,		/* (input) */
	const int *n,			/* (input) */
	const int *kd,			/* (input) */
	const complex_float *ab,	/* ab[n][ldab] (input) */
	const int *ldab,		/* (input) */
	complex_float *x,		/* x[n] (input/output) */
	float *scale,			/* (output) */
	float *cnorm,			/* cnorm[n] (input or output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

