#ifdef __cplusplus
extern "C" void slatps_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const char &normin,		// (input)
	const int &n,			// (input)
	const float *ap,		// ap[n*(n+1)/2] (input)
	float *x,			// x[n] (input/output)
	float &scale,			// (output)
	float *cnorm,			// cnorm[n] (input or output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void slatps_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const char *normin,		/* (input) */
	const int *n,			/* (input) */
	const float *ap,		/* ap[n*(n+1)/2] (input) */
	float *x,			/* x[n] (input/output) */
	float *scale,			/* (output) */
	float *cnorm,			/* cnorm[n] (input or output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

