#ifdef __cplusplus
extern "C" void zlaset_(
	const char &uplo,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const complex<double> &alpha,	// (input)
	const complex<double> &beta,	// (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void zlaset_(
	const char *uplo,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const complex_double *alpha,	/* (input) */
	const complex_double *beta,	/* (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

