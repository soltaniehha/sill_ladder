#ifdef __cplusplus
extern "C" void dlaset_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double &alpha,		// (input)
	const double &beta,		// (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void dlaset_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *alpha,		/* (input) */
	const double *beta,		/* (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

