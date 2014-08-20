#ifdef __cplusplus
extern "C" void zlasr_(
	const char &side,		// (input)
	const char &pivot,		// (input)
	const char &direct,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *c,		// c[?] (input)
	const double *s,		// s[?] (input)
	complex<double> *a,		// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void zlasr_(
	const char *side,		/* (input) */
	const char *pivot,		/* (input) */
	const char *direct,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *c,		/* c[?] (input) */
	const double *s,		/* s[?] (input) */
	complex_double *a,		/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

