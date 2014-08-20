#ifdef __cplusplus
extern "C" void dlatrs_(
	const char &uplo,		// (input)
	const char &trans,		// (input)
	const char &diag,		// (input)
	const char &normin,		// (input)
	const int &n,			// (input)
	const double *a,		// a[n][lda] (input)
	const int &lda,			// (input)
	double *x,			// x[n] (input/output)
	double &scale,			// (output)
	double *cnorm,			// cnorm[n] (input or output)
	int &info			// (output)
	);
#else /* ! __cplusplus */
void dlatrs_(
	const char *uplo,		/* (input) */
	const char *trans,		/* (input) */
	const char *diag,		/* (input) */
	const char *normin,		/* (input) */
	const int *n,			/* (input) */
	const double *a,		/* a[n][lda] (input) */
	const int *lda,			/* (input) */
	double *x,			/* x[n] (input/output) */
	double *scale,			/* (output) */
	double *cnorm,			/* cnorm[n] (input or output) */
	int *info			/* (output) */
	);
#endif /* ! __cplusplus */

