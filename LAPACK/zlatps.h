#ifdef __cplusplus
extern "C" void zlatps_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const char &normin,		// (input)
	const int &n,			// (input)
	const complex<double> *ap,	// ap[n*(n+1)/2] (input)
	complex<double> *x,		// x[n] (input/output)
	double &scale,			// (output)
	double *cnorm,			// cnorm[n] (input or output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void zlatps_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const char *normin,		/* (input) */
	const int *n,			/* (input) */
	const complex_double *ap,	/* ap[n*(n+1)/2] (input) */
	complex_double *x,		/* x[n] (input/output) */
	double *scale,			/* (output) */
	double *cnorm,			/* cnorm[n] (input or output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

