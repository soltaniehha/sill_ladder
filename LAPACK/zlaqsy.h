#ifdef __cplusplus
extern "C" void zlaqsy_(
	const char &uplo,		// (input)
	const int &n,			// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda,			// (input)
	const double *s,		// s[n] (input)
	const double &scond,		// (input)
	const double &amax,		// (input)
	char &equed			// (output)
	);
#else /* ! __cplusplus */
void zlaqsy_(
	const char *uplo,		/* (input) */
	const int *n,			/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda,			/* (input) */
	const double *s,		/* s[n] (input) */
	const double *scond,		/* (input) */
	const double *amax,		/* (input) */
	char *equed			/* (output) */
	);
#endif /* ! __cplusplus */

