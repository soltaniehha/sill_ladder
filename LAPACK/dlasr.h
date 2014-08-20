#ifdef __cplusplus
extern "C" void dlasr_(
	const char &side,		// (input)
	const char &pivot,		// (input)
	const char &direct,		// (input)
	const int &m,			// (input)
	const int &n,			// (input)
	const double *c,		// c[?] (input)
	const double *s,		// s[?] (input)
	double *a,			// a[n][lda] (input/output)
	const int &lda			// (input)
	);
#else /* ! __cplusplus */
void dlasr_(
	const char *side,		/* (input) */
	const char *pivot,		/* (input) */
	const char *direct,		/* (input) */
	const int *m,			/* (input) */
	const int *n,			/* (input) */
	const double *c,		/* c[?] (input) */
	const double *s,		/* s[?] (input) */
	double *a,			/* a[n][lda] (input/output) */
	const int *lda			/* (input) */
	);
#endif /* ! __cplusplus */

